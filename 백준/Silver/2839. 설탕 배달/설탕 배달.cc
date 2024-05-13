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

int dp[5001];

int main() {
	fast_io;
	dp[3] = 1;
	dp[5] = 1;
	int n;
	cin >> n;
	for (int i = 3; i <= 5000; i++) {
		if (dp[i - 3] && dp[i - 5]) {
			dp[i] = min(dp[i - 3] + 1, dp[i - 5] + 1);
		}
		else if (!dp[i - 3] && dp[i-5]) {
			dp[i] = dp[i - 5] + 1;
		}
		else if (dp[i - 3] && !dp[i - 5]) {
			dp[i] = dp[i - 3] + 1;
		}
	}
	if (dp[n]) {
		cout << dp[n];
	}
	else cout << -1;
}