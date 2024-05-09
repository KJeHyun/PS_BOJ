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

int dp[100001];

int main() {
	fast_io;
	fill(dp, dp + 100001, INT_MAX);
	dp[0] = 0;
	for (int i = 1; i < 100001; i++) {
		for (int j = 1; j * j <= i; j++) {
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
	}
	int x;
	cin >> x;
	cout << dp[x];
}