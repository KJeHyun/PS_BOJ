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
	int n, m, r;
	cin >> n >> m >> r;
	vector<double> a(n), b(m + 1);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= m; i++) {
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	double res = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			auto it = upper_bound(b.begin(), b.end(), r * 2 / (a[j] - a[i])) - 1;
			res = max(res, *it * (a[j] - a[i]) / 2);
		}
	}

	if (!res) {
		cout << -1;
		return 0;
	}
	cout.precision(1);
	cout << fixed << res;
}