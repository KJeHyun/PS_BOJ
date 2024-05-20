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
	int n, q;
	cin >> n;
	vector<pii> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].xx;
		a[i].xx += i;
		a[i].yy = i + 1;
	}
	sort(a.begin(), a.end());
	vector<int> min_yy(n);
	min_yy[n - 1] = a[n - 1].yy;
	for (int i = n - 2; i >= 0; i--) {
		min_yy[i] = min(min_yy[i + 1], a[i].yy);
	}
	cin >> q;
	while (q--) {
		int sz;
		cin >> sz;
		auto it = lower_bound(a.begin(), a.end(), make_pair(sz, 0)) - a.begin();
		cout << min_yy[it] << ' ';
	}
}