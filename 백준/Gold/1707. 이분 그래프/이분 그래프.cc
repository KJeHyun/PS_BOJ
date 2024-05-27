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

bool vst[20'001][2];

void dfs(int here, int flag, vector<vector<int>>& g) {
    vst[here][flag] = true;
    for (int nxt : g[here]) {
        if (vst[nxt][flag ^ 1]) continue;
        dfs(nxt, flag ^ 1, g);
    }
}

int main() {
    fast_io;
    int k;
    cin >> k;
    while (k--) {
        int v, e;
        cin >> v >> e;
        vector<vector<int>> graph(v + 1);
        memset(vst, false, sizeof(vst));
        for (int i = 0; i < e; ++i) {
            int x, y;
            cin >> x >> y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        for (int i = 1; i < v + 1; ++i) {
            if (!vst[i][0] && !vst[i][1]) dfs(i, 0, graph);
        }
        bool isBip = true;
        for (int i = 1; i < v + 1; ++i) {
            if (vst[i][0] && vst[i][1]) isBip = false;
        }
        if (isBip) cout << "YES\n";
        else cout << "NO\n";
    }
}