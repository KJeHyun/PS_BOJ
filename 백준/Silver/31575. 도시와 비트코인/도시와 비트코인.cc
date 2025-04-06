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

const int MAX = 300;
int N, M;
int Mp[MAX][MAX];
bool vst[MAX][MAX];
int dx[] = { 1,0 };
int dy[] = { 0,1 };

bool bfs() {
	queue<pii> q;
	q.push({ 0, 0 });
	memset(vst, false, sizeof(vst));
	vst[0][0] = true;
	while (!q.empty()) {
		auto [x, y] = q.front();
		q.pop();
		if (x == M - 1 && y == N - 1) return 1;
		for (int i = 0; i < 2; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < M && ny < N && Mp[nx][ny] == 1 && !vst[nx][ny]) {
				q.push({ nx,ny });
				vst[nx][ny] = true;
			}
		}
	}
	return 0;
}

int main() {
	fast_io;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> Mp[i][j];
		}
	}
	cout << (bfs() ? "Yes\n" : "No\n");
}