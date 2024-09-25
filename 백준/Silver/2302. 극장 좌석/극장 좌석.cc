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

int aud[41];

int main() {
    fast_io;
    int n, m, ans = 1;
    cin >> n >> m;
    vector<int> vip(m + 2);
    vip[0] = 0;
    vip[m + 1] = n + 1;
    for (int i = 1; i <= m; i++) {
        cin >> vip[i];
    }
    aud[0] = 1;
    aud[1] = 1;
    aud[2] = 2;
    for (int i = 3; i <= n; i++) {
        aud[i] = aud[i - 1] + aud[i - 2];
    }
    for (int i = 1; i <= m + 1; i++) {
        ans *= aud[vip[i] - vip[i - 1] - 1];
    }
    cout << ans;
}