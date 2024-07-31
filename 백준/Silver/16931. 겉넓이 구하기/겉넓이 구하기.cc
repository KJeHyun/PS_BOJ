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
	int n, m, res = 0;
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> v[i][j];
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (j == 0) {
				res += v[i][j];
				if (m == 1) {
					res += v[i][j];
				}
				continue;
			}
			res += abs(v[i][j] - v[i][j - 1]);
			if (j == m - 1) {
				res += v[i][j];
			}
		}
	}
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			if (j == 0) {
				res += v[j][i];
				if (n == 1) {
					res += v[i][j];
				}
				continue;
			}
			res += abs(v[j][i] - v[j - 1][i]);
			if (j == n - 1) {
				res += v[j][i];
			}
		}
	}
	res += 2 * n * m;
	cout << res << "\n";
}