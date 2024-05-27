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

int a, b, n, m;
bool vst[1001];
vector<int> adj[1001];

int bfs(int here) {
    queue<int> q;
    q.push(here);
    vst[here] = true;
    int lv = 0;
    while (!q.empty()) {
        int sz = q.size();
        for (int i = 0; i < sz; ++i) {
            int now = q.front();
            q.pop();
            if (now == b) return lv;
            for (int nxt : adj[now]) {
                if (vst[nxt]) continue;
                q.push(nxt);
                vst[nxt] = true;
            }
        }
        lv++;
    }
    return -1;
}
int main() {
    fast_io;
    cin >> a >> b >> n >> m;
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout << bfs(a);
}