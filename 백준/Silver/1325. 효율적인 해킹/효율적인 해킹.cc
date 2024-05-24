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

int cnt;
bool vst[10001];
vector<vector<int>> graph(10001);
void dfs(int here) {
    vst[here] = true;
    cnt++;
    for (int i : graph[here]) {
        if (vst[i]) continue;
        cnt++;
        dfs(i);
    }
}
int main(){
    fast_io;
    int n, m;
    cin >> n >> m;
    while (m--) {
        int a, b;
        cin >> a >> b;
        graph[b].push_back(a);
    }
    vector<pii> v;
    for (int i = 1; i <= 10000; ++i) {
        if (vst[i]) continue;
        cnt = 1;
        dfs(i);
        if (!v.empty() && v.back().yy < cnt) {
            v.clear();
        }
        if (v.empty() || v.back().yy == cnt) {
            v.push_back({ i,cnt });
        }
        memset(vst, false, 10001);
    }
    sort(v.begin(), v.end());
    for (auto& a : v) cout << a.xx << " ";
}