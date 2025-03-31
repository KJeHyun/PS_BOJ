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

const int INF = 1e9;
const int MAX = 1000;
int N, M;
int mp[MAX][MAX];
int dist[MAX][MAX][2];

int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };

int bfs() {
	queue<tiii> q;
	q.push({ 0,0,0 });
	dist[0][0][0] = 1;

	while (!q.empty()) {
		auto [x, y, broken] = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;

			if (mp[nx][ny] == 0 && dist[nx][ny][broken] == INF) {
				dist[nx][ny][broken] = dist[x][y][broken] + 1;
				q.push({ nx, ny, broken });
			}
			else if (mp[nx][ny] == 1 && broken == 0 && dist[nx][ny][1] == INF) {
				dist[nx][ny][1] = dist[x][y][broken] + 1;
				q.push({ nx, ny, 1 });
			}
		}
	}
	int result = min(dist[N - 1][M - 1][0], dist[N - 1][M - 1][1]);
	return result == INF ? -1 : result;
}
int main() {
	fast_io;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < M; j++) {
			mp[i][j] = s[j] - '0';
			dist[i][j][0] = INF;
			dist[i][j][1] = INF;
		}
	}
	cout << bfs() << "\n";
}