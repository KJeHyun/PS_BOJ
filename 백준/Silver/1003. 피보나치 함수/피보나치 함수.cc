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

vector<pii> dp(41);


int main() {
	fast_io;
	int n;
	cin >> n;
	dp[0] = { 1,0 };
	dp[1] = { 0,1 };
	for (int i = 2; i < 41; i++) {
		dp[i].xx = dp[i - 2].xx + dp[i - 1].xx;
		dp[i].yy = dp[i - 2].yy + dp[i - 1].yy;
	}
	while (n--) {
		int x;
		cin >> x;
		cout << dp[x].xx << " " << dp[x].yy << "\n";
	}
}