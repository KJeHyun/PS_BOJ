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
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    vector<int> squares;
    for (int i = 1; i * i <= n; ++i) {
        squares.push_back(i * i);
    }
    for (auto& square : squares) {
        for (int j = square; j <= n; ++j) {
            dp[j] = min(dp[j], dp[j - square] + 1);
        }
    }
    cout << dp[n] << "\n";
}