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

bool vst1[1000], vst2[1000];
vector<int> graph[1000];

void dfs(int here) {
    vst1[here] = true;
    cout << here + 1 << " ";
    for (int nxt : graph[here]) {
        if (vst1[nxt]) continue;
        dfs(nxt);
    }
}
void bfs(int here) {
    queue<int> q;
    vst2[here] = true;
    cout << here + 1 << " ";
    q.push(here);
    while (!q.empty()) {
        int now = q.front();
        q.pop();
        for (int nxt : graph[now]) {
            if (vst2[nxt]) continue;
            q.push(nxt);
            vst2[nxt] = true;
            cout << nxt + 1 << " ";
        }
    }
}
int main(){
    fast_io;
    int n, m, v;
    cin >> n >> m >> v;
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        graph[a - 1].push_back(b - 1);
        graph[b - 1].push_back(a - 1);
    }
    for (auto& v : graph) {
        sort(v.begin(), v.end());
    }
    dfs(v - 1);
    cout << "\n";
    bfs(v - 1);
}