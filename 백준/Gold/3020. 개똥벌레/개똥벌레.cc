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
	int n, h;
	cin >> n >> h;
	vector<int> a, b;
	vector<ll> res(h);
	for (int i = 0; i < n; i++) {
		int g;
		cin >> g;
		if (i % 2 == 0) {
			a.push_back(g);
		}
		else {
			b.push_back(g);
		}
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for (int i = 0; i < h; i++) {
		res[i] += a.end() - lower_bound(a.begin(), a.end(), i + 1);
		res[i] += b.end() - lower_bound(b.begin(), b.end(), h - i);
	}
	sort(res.begin(), res.end());
	cout << res[0] << " " << upper_bound(res.begin(), res.end(), res[0]) - res.begin();
}
