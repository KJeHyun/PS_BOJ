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
	int n, k;
	cin >> n >> k;
	priority_queue<int> pq;
	vector<pii> jw(n);
	for (int i = 0; i < n; i++){
		cin >> jw[i].xx >> jw[i].yy;
	}
	vector<int> b(k);
	for (int i = 0; i < k; i++) {
		cin >> b[i];
	}
	sort(b.begin(), b.end());
	sort(jw.begin(), jw.end());
	int idx = 0; ll res = 0;
	for (int i = 0; i < k; i++) {
		for (int j = idx; j < n; j++) {
			if (b[i] >= jw[j].xx) {
				pq.push(jw[j].yy);
				idx = j + 1;
			}
			else break;
		}
		if (!pq.empty()) {
			res += pq.top();
			pq.pop();
		}
	}
	cout << res;
}