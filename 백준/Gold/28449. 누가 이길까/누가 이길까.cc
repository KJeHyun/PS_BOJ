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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll v = 0, l = 0, d = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[0]) {
            l += m;
            continue;
        }
        if (a[i] > b[m - 1]) {
            v += m;
            continue;
        }
        auto lo = lower_bound(b.begin(), b.end(), a[i]);
        auto up = upper_bound(b.begin(), b.end(), a[i]);
        l += b.end() - up;
        v += lo - b.begin();
        d += up - lo;
    }
    cout << v << " " << l << " " << d;
}