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
	int cnt = 0, res1 = 0, res2 = 0;
	vector<vector<char>> a(n, vector<char>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			if (a[i][j] == '.') {
				cnt++;
				continue;
			}
			else if (cnt >= 2) res1++;
			cnt = 0;
		}
		if (cnt >= 2) res1++;
		cnt = 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[j][i] == '.') {
				cnt++;
				continue;
			}
			else if (cnt >= 2) res2++;
			cnt = 0;
		}
		if (cnt >= 2) res2++;
		cnt = 0;
	}
	cout << res1 << " " << res2;
}
