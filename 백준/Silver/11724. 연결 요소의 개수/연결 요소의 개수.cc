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

bool vst[1000];
vector<int> graph[1000];

void dfs(int idx) {
	vst[idx] = true;
	for (int& i : graph[idx]) {
		if (vst[i]) continue;
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
		graph[a - 1].push_back(b - 1);
		graph[b - 1].push_back(a - 1);
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (!vst[i]) {
			dfs(i);
			cnt++;
		}
	}
	cout << cnt;
}