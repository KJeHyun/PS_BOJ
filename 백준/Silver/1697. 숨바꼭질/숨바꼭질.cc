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

int n, k, dist[100'001];
void bfs() {
	dist[n] = 0;
	queue<int> q;
	q.push(n);
	while (!q.empty()) {
		int here = q.front();
		q.pop();
		if (here == k) {
			break;
		}
		if (2 * here <= 100'000 && dist[2 * here] == -1) {
			q.push(2 * here);
			dist[2 * here] = dist[here] + 1;
		}
		if (here - 1 >= 0 && dist[here - 1] == -1) {
			q.push(here - 1);
			dist[here - 1] = dist[here] + 1;
		}
		if (here + 1 <= 100'000 && dist[here + 1] == -1) {
			q.push(here + 1);
			dist[here + 1] = dist[here] + 1;
		}
	}
}
int main() {
	fast_io;
	cin >> n >> k;
	memset(dist, -1, sizeof(dist));
	bfs();
	cout << dist[k];
}