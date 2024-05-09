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
    vector<pii> v;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a > b) v.push_back({ b,a });
    }
    if (v.empty()) {
        cout << m;
        return 0;
    }
    sort(v.begin(), v.end());
    ll res = 0;
    int L = v[0].xx, R = v[0].yy;
    for (int i = 1; i < v.size(); i++) {
        if (v[i].xx <= R) {
            R = max(R, v[i].yy);
        }
        else {
            res += 2 * (R - L);
            L = v[i].xx;
            R = v[i].yy;
        }
    }
    res += 2 * (R - L);
    res += m;
    cout << res;
}