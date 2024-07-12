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

const ll MOD = 1e9 + 7;

int main() {
	fast_io;
	int n;
	cin >> n;
	vector<ll> h(n);
	for (ll& i : h) cin >> i;
	sort(h.begin(), h.end(), greater());
	ll res = h[0], pS = h[0];
	for (ll i = 1; i < n; ++i) {
		h[i] = h[i] + pS;
		res += h[i];
		pS += h[i];
		h[i] %= MOD;
		res %= MOD;
		pS %= MOD;
	}
	cout << res;
}