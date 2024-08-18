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
    vector<int> q(n);
    vector<pii> s(m);
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> s[i].yy;
        for (int j = 0; j < n; j++) {
            char c;
            cin >> c;
            if (c == 'O') s[i].xx += q[j];
        }
    }
    sort(s.begin(), s.end(), [](pii x, pii y) -> bool {
        if (x.xx != y.xx) return x > y;
        return x.yy < y.yy;
        });
    cout << s[0].yy << " " << s[0].xx;
}