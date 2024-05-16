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

int dp[15][15];

int main() {
	fast_io;
	int T;
	cin >> T;
	for (int i = 0; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			if (i == 0) dp[i][j] = j;
			else {
				for (int k = 1; k <= j; k++) {
					dp[i][j] += dp[i - 1][k];
				}
			}
		}
	}
	while (T--) {
		int k, n;
		cin >> k >> n;  
		cout << dp[k][n] << "\n";
	}
}
