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
	ll k;
	cin >> n;
	vector<ll> v(n);
	for (ll& i : v) cin >> i;
	cin >> k;
	int r = 0;
	ll sum = 0, res = 0;
	for (int l = 0; l < n; ++l) {
		while (r < n && sum + v[r] <= k) {
			sum += v[r];
			r++;
		}
		res += (n - r);
		sum -= v[l];
	}
	cout << res;
}