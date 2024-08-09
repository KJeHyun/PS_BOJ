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
int ord[100'001], cnt;

void dfs(int here) {
    cnt++;
    ord[here] = cnt;
    
    for (int nxt : adj[here]) {
        if (ord[nxt]) continue;
        dfs(nxt);
    }
}

int main() {
    fast_io;
    int n, m, r;
    cin >> n >> m >> r;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }
    dfs(r);
    for (int i = 1; i <= n; i++) {
        cout << ord[i] << "\n";
    }
}