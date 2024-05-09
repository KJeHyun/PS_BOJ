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
	int n;
	cin >> n;
	deque<pii> dq;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		dq.push_back({ a,i + 1 });
	}
	while (n) {
		int tmp = dq.front().xx;
		cout << dq.front().yy << " ";
		dq.pop_front();
		if (dq.empty()) break;
		if (tmp > 0) {
			while (--tmp) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else {
			tmp = -tmp;
			while (tmp--) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
}
