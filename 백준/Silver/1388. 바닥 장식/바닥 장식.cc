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
	vector<vector<char>> v(n, vector<char>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
		}
	}
	int res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (v[i][j] == '-') {
				res++;
				while (j + 1 < m && v[i][j + 1] == '-') {
					j++;
				}
			}
		}
	}
	for (int i = 0; i < m; i++) {
		int  cnt = 0;
		for (int j = 0; j < n; j++) {
			if (v[j][i] == '|') {
				res++;
				while (j + 1 < n && v[j + 1][i] == '|') {
					j++;
				}
 			}
		}
		res += cnt;
	}
	cout << res;
}