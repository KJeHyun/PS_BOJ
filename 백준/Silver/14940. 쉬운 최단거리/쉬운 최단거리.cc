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

int N, M;
pii start;
int G[1000][1000];
int D[1000][1000];
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };

void bfs(pii S) {
	queue<pii> q;
	q.push(S);
	memset(D, -1, sizeof(D));
	D[S.xx][S.yy] = 0;
	while (!q.empty()) {
		pii here = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			pii next = { here.xx + dx[i],here.yy + dy[i] };
			if (next.xx >= 0 && next.xx < N && next.yy >= 0 && next.yy < M) {
				if (G[next.xx][next.yy] && D[next.xx][next.yy] == -1) {
					D[next.xx][next.yy] = D[here.xx][here.yy] + 1;
					q.push(next);
				}
			}
		}
	}
}

int main() {
	fast_io;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> G[i][j];
			if (G[i][j] == 2)
				start = make_pair(i, j);
		}
	}
	bfs(start);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (!G[i][j]) cout << 0;
			else cout << D[i][j];
			cout << (j == M - 1 ? "" : " ");
		}
		cout << "\n";
	}
}