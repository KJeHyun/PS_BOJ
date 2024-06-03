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
    int n;
    cin >> n;
    vector<vector<int>> dp(n);
    int x, M = -1;
    cin >> x;
    dp[0].push_back(x);
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cin >> x;
            dp[i].push_back(x);
            if (j == 0) {
                dp[i][j] += dp[i - 1][0];
            }
            else if (j == i) {
                dp[i][j] += dp[i - 1][i - 1];
            }
            else {
                dp[i][j] += max(dp[i - 1][j], dp[i - 1][j - 1]);
            }
            if (i == n - 1) {
                M = max(M, dp[i][j]);
            }
        }
    }
    if (n == 1) M = dp[0][0];
    cout << M << "\n";
}