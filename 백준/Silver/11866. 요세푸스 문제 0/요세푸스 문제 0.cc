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
vector<int> ans(5001);
int main() {
	fast_io;
	int N, K, idx = 0;
	cin >> N >> K;
	queue<int> q;
	for (int i = 1; i < N + 1; i++) {
		q.push(i);
	}
	while (!q.empty()) {
		int tmp;
		for (int k = 0; k < K - 1; k++) {
			tmp = q.front();
			q.pop(); q.push(tmp);
		}
		ans[idx] = q.front();
		q.pop();
		idx++;
	}
	std::cout << '<';
	for (int i = 0; i < N; i++) {
		std::cout << ans[i] << ((i == N - 1) ? ">" : ", ");
	}
}