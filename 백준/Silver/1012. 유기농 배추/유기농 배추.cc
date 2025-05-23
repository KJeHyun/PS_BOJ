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

int N, M, K;
bool field[50][50];
bool vst[50][50];
pii dxy[] = { {-1,0}, {1,0}, {0,-1}, {0,1} };

void dfs(pii C) {
	vst[C.xx][C.yy] = true;
	for (int i = 0; i < 4; i++) {
		if (field[C.xx + dxy[i].xx][C.yy +dxy[i].yy] &&
			!vst[C.xx + dxy[i].xx][C.yy + dxy[i].yy]
			&& C.xx + dxy[i].xx >= 0 && C.xx + dxy[i].xx < 50
			&& C.yy + dxy[i].yy >= 0 && C.yy + dxy[i].yy < 50) {
			dfs({ C.xx + dxy[i].xx, C.yy + dxy[i].yy });
		}
	}
}

int main() {
	fast_io;
	int T;
	cin >> T;
	while (T--) {
		int cnt = 0;
		memset(field, false, sizeof(field));
		memset(vst, false, sizeof(vst));
		cin >> N >> M >> K;
		vector<pii> c;
		while (K--) {
			int x, y;
			cin >> x >> y;
			c.push_back({ x,y });
			field[x][y] = true;
		}
		for (int i = 0; i < c.size(); i++) {
			if (field[c[i].xx][c[i].yy] && !vst[c[i].xx][c[i].yy]) {
				dfs(c[i]);
				cnt++;
			}
		}
		cout << cnt << "\n";
	}
}