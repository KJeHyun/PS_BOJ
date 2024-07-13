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
int root[100'001];
bool vst[100'001];

void dfs(int here) {
	vst[here] = true;
	for (int& now : adj[here]) {
		if (vst[now]) continue;
		root[now] = here;
		dfs(now);
	}
}

int main() {
	fast_io;
	int n;
	cin >> n;
	for (int i = 0; i < n - 1; ++i) {
		int x, y;
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	dfs(1);
	for (int i = 2; i <= n; ++i) {
		cout << root[i] << "\n";
	}
}