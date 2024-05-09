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
	int n,m;
	cin >> n>>m;
	vector<vector<char>> ch(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char a;
			cin >> a;
			ch[i].push_back(a);
		}
	}
	int ans = 65;
	for (int t = 0; t <= n - 8; t++) {
		for (int j = 0; j <= m - 8; j++) {
			int c1 = 0, c2 = 0;
			for (int i = t; i < t + 8; i++) {
				for (int k = j; k < j + 8; k++) {
					if ((i+k) % 2) {
						if (ch[i][k] != 'B') c1++;
						if (ch[i][k] != 'W') c2++;
					}
					else {
						if (ch[i][k] != 'B') c2++;
						if (ch[i][k] != 'W') c1++;
					}
				}
			}
			ans = min({ ans,c1,c2 });
		}
	}
	cout << ans;
}