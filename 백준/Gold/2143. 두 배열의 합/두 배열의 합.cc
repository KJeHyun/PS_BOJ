#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef tuple<int, int, int> tiii;
typedef tuple<ll, ll, ll> tlll;
#define xx first
#define yy second

int main() {
    fast_io;
    int T, n, m;
    cin >> T;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0) continue;
        a[i] += a[i - 1];
    }
    cin >> m;
    vector<long long> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        if (i == 0) continue;
        b[i] += b[i - 1];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            a.push_back(a[j] - a[i]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            b.push_back(b[j] - b[i]);
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll cnt = 0;
    for (int i = 0; i < a.size(); i++) {
        cnt += upper_bound(b.begin(), b.end(), T - a[i]) - lower_bound(b.begin(), b.end(), T - a[i]);
    }
    cout << cnt;
}