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
	int n, k, m = 1234567;
	cin >> n >> k;
	vector<int> v(n);
	for (int& i : v) cin >> i;
	int l = 0, r = 0, cnt = 0;
	while (r < n) {
		if (v[r] == 1) cnt++;
		while (cnt == k) {
			m = min(m, r - l + 1);
			if (v[l++] == 1) cnt--;
		}
		r++;
	}
	if (m == 1234567) cout << -1;
	else cout << m;
}