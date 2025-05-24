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
	int n, m, cnt = 0;
	bool b;
	cin >> n >> m;
	vector<bool> v(n, 0);
	vector<vector<int>> w(n, vector<int>(n, 0));
	if (n < 3) {
		cout << 0;
		return 0;
	}
	v[n - 1] = v[n - 2] = v[n - 3] = 1;
	for (int i = 0; i < m; ++i) {
		int x, y;
		cin >> x >> y;
		w[x - 1][y - 1] = 1;
		w[y - 1][x - 1] = 1;
	}
	do {
		b = true;
		vector<int> s;
		vector<pii> t(3);
		for (int i = 0; i < n; ++i)
			if (v[i]) s.push_back(i + 1);
		t[0] = { s[0],s[1] };
		t[1] = { s[0],s[2] };
		t[2] = { s[1],s[2] };
		for (auto& p : t) {
			if (w[p.xx - 1][p.yy - 1]) {
				b = false;
				break;
			}
			if (!b) break;
		}
		if (b) ++cnt;
	} while (next_permutation(v.begin(), v.end()));
	cout << cnt;
}