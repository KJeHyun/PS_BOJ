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

int dist[101];
vector<int> adj[101];

void bfs(int here) {
    dist[here] = 0;
    queue<int> q;
    q.push(here);
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        for (int nxt : adj[now]) {
            if (dist[nxt] != -1) continue;
            dist[nxt] = dist[now] + 1;
            q.push(nxt);
        }
    }
}

int main() {
    fast_io;
    int n, a, b, m;
    cin >> n >> a >> b >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(dist, -1, sizeof(dist));
    bfs(a);
    cout << dist[b];
}