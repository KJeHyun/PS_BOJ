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

int leaf, m, root;
bool vst[50];
vector<vector<int>> tree(50);
void dfs(int here) {
    vst[here] = true;
    bool isLeaf = true;
    for (auto& nxt : tree[here]) {
        if (vst[nxt]) continue;
        isLeaf = false;
        dfs(nxt);
    }
    if (isLeaf) leaf++;
}
int main(){
    fast_io;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (a == -1) root = i;
        else tree[a].push_back(i);
    }
    cin >> m;
    vst[m] = true;
    if (m == root) {
        cout << 0;
        return 0;
    }
    dfs(root);
    cout << leaf;
}