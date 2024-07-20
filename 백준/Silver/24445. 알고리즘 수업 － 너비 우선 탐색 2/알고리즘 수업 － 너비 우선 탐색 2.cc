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

vector<int> adj[100'001];
int vst[100'001];

void bfs(int here) {
	int cnt = 1;
	vst[here] = cnt;
	queue<int> q;
	q.push(here);
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int nxt : adj[now]) {
			if (vst[nxt] == -1) {
				q.push(nxt);
				cnt++;
				vst[nxt] = cnt;
			}
		}
	}
}

int main() {
	fast_io;
	memset(vst, -1, sizeof(vst));
	int n, m, r;
	cin >> n >> m >> r;
	for (int i = 0; i < m; ++i) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for (vector<int>& v : adj)
		sort(v.begin(), v.end(), greater());
	bfs(r);
	for (int i = 1; i <= n; ++i) {
		if (vst[i] != -1)
			cout << vst[i] << "\n";
		else
			cout << 0 << "\n";
	}
}