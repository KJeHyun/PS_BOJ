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
	vector<vector<int>> v(n + 1, vector<int>(n + 1));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int x;
			cin >> x;
			v[i][j] = v[i - 1][j] + v[i][j - 1] - v[i - 1][j - 1] + x;
		}
	}
	while (m--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		cout << v[c][d] - v[a - 1][d] - v[c][b - 1] + v[a - 1][b - 1] << "\n";
	}
}