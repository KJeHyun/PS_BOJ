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
    const int MOD = 1000000007;
    int dp[1516][3] = {}, N;
    cin >> N;
    dp[2][0] = dp[2][1] = 1;
    for (int i = 3; i <= N; i++) {
        dp[i][0] = (dp[i - 1][1] + dp[i - 1][2]) % MOD;
        dp[i][1] = (dp[i - 1][2] + dp[i - 1][0]) % MOD;
        dp[i][2] = (dp[i - 1][1] + dp[i - 1][0]) % MOD;
    }
    cout << dp[N][0];
}