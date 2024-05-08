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
	priority_queue<pii, vector<pii>, greater<pii>> pq;
 	for (int i = 0; i < n; i++) {;
	int d, dr;
		cin >> d;
		dr = abs(d);
		if (d == 0) {
			if (!pq.empty()) {
				cout << pq.top().yy << '\n';
				pq.pop();
			}
			else cout << 0 << '\n';
		}
		else pq.push({ dr,d });
	}
}