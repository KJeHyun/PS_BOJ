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

int binomial[1001][1001];

int main() {
	fast_io;
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		binomial[i][0] = 1;
		binomial[i][i] = 1;
		for (int j = 1; j < i; j++) {
			binomial[i][j] = (binomial[i - 1][j - 1] + binomial[i - 1][j]) % 10'007;
		}
	}
	cout << binomial[n][k] % 10'007;
}
