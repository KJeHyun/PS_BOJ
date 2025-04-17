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
	int n, m;
	cin >> n >> m;
	vector<vector<int>> v(n, vector<int>(m));
	vector<vector<vector<int>>> cost(n, vector<vector<int>>(m, vector<int>(3, 100000)));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0) {
				cost[0][j][0] = v[0][j];
				cost[0][j][1] = v[0][j];
				cost[0][j][2] = v[0][j];
				continue;
			}
			if (j == 0) {
				cost[i][0][0] = min(cost[i - 1][1][1], cost[i - 1][1][2]) + v[i][0];
				cost[i][0][1] = cost[i - 1][0][0] + v[i][0];
			}
			else if (j == m - 1) {
				cost[i][m - 1][1] = cost[i - 1][m - 1][2] + v[i][m - 1];
				cost[i][m - 1][2] = min(cost[i - 1][m - 2][0], cost[i - 1][m - 2][1]) + v[i][m - 1];
			}
			else {
				cost[i][j][0] = min(cost[i - 1][j + 1][1], cost[i - 1][j + 1][2]) + v[i][j];
				cost[i][j][1] = min(cost[i - 1][j][0], cost[i - 1][j][2]) + v[i][j];
				cost[i][j][2] = min(cost[i - 1][j - 1][0], cost[i - 1][j - 1][1]) + v[i][j];
			}
		}
	}
	int m_c = 100'000;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < 3; j++) {
			if (cost[n - 1][i][j] < m_c)
				m_c = cost[n - 1][i][j];
		}
	}
	cout << m_c;
}