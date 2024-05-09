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

vector<vector<int>> ttt(3, vector<int>(3));
bool isEnd(const vector<vector<int>>& v) {
	if (v[0][0] != 0 && v[0][0] == v[0][1] && v[0][0] == v[0][2] ||
		v[1][0] != 0 && v[1][0] == v[1][1] && v[1][0] == v[1][2] ||
		v[2][0] != 0 && v[2][0] == v[2][1] && v[2][0] == v[2][2] ||
		v[0][0] != 0 && v[0][0] == v[1][0] && v[0][0] == v[2][0] ||
		v[0][1] != 0 && v[0][1] == v[1][1] && v[0][1] == v[2][1] ||
		v[0][2] != 0 && v[0][2] == v[1][2] && v[0][2] == v[2][2] ||
		v[0][0] != 0 && v[0][0] == v[1][1] && v[0][0] == v[2][2] ||
		v[2][0] != 0 && v[2][0] == v[1][1] && v[2][0] == v[0][2]) {
		return true;
	}
	return false;
}
int main() {
	fast_io;
	int n, m, cnt = 0;
	cin >> n;
	m = (n == 1) ? 2 : 1;
	while (!isEnd(ttt) && cnt < 9) {
		int a, b;
		cin >> a >> b;
		if (cnt % 2 == 0) ttt[a - 1][b - 1] = n;
		else ttt[a - 1][b - 1] = m;
		cnt++;
	}
	if (!isEnd(ttt)) {
		cout << 0;
		return 0;
	}
	else cout << ((cnt % 2 == 0) ? m : n);
}
