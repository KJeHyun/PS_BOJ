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

int main() {
	fast_io;
	int T;
	cin >> T;
	while (T--) {
		int n, m, cnt = 1;
		cin >> n >> m;
		queue<pii> q;
		priority_queue<int> pq;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			q.push({ x,i });
			pq.push(x);
		}
		while (1) {
			if (q.front() == make_pair(pq.top(), m)) break;
			if (q.front().xx == pq.top()) {
				q.pop();
				pq.pop();
				cnt++;
			}
			else {
				q.push(q.front());
				q.pop();
			}

		}
		cout << cnt << "\n";
	}

}