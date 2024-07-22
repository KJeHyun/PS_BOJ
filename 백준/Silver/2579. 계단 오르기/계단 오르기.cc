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

int str[300], dp[300];

int main() {
	fast_io;

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> str[i];
	}

	dp[0] = str[0];

	if (n > 1) {
		dp[1] = str[0] + str[1];

		for (int i = 2; i < n; ++i) {
			dp[i] = max(dp[i - 2], dp[i - 3] + str[i - 1]) + str[i];
		}
	}

	cout << dp[n - 1] << "\n";
}