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
    vector<vector<ll>> v(n, vector<ll>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    vector<vector<ll>> dp(n, vector<ll>(m));
    dp[0][0] = v[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 && j == 0) continue;
            if (i == 0) {
                dp[i][j] = dp[i][j - 1] + v[i][j];
            }
            else if (j == 0) {
                dp[i][j] = dp[i - 1][j] + v[i][j];
            }
            else
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + v[i][j];
        }
    }
    ll h;
    cin >> h;
    if (h >= dp[n - 1][m - 1]) cout << "YES\n" << dp[n - 1][m - 1];
    else cout << "NO";
}