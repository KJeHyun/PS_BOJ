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
	int n, m; cin >> n >> m;
	priority_queue<int> pq;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		pq.push(a);
	}
	bool isHappy = true;
	for (int i = 0; i < m; i++) {
		int b;
		cin >> b;
		b = pq.top() - b;
		pq.pop();
		if (b < 0) isHappy = false;
		pq.push(b);
	}
	if (isHappy) cout << 1;
	else cout << 0;
}