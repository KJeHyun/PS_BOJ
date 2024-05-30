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

ll dp[91];

int main() {
    fast_io;
    int n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= 90; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n];
}