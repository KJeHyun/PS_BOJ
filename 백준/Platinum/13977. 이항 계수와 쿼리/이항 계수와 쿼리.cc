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

tlll xGCD(ll a, ll b) {
	if (!b) return make_tuple(a, 1, 0);
	ll g, x, y;
	tie(g, x, y) = xGCD(b, a % b);
	return make_tuple(g, y, x - (a / b) * y);
}

int main() {
	fast_io;
	int M;
	cin >> M;
	const ll MOD = 1'000'000'007;
	vector<ll> fac(4'000'001, 1);
	vector<ll> inv_fac(4'000'001, 1);
	for (int i = 1; i <= 4'000'000; i++) {
		fac[i] = (fac[i - 1] * i) % MOD;
	}
	auto [g1, x1, y1] = xGCD(fac[4'000'000], MOD);
	x1 = x1 < 0 ? MOD + x1 : x1;
	inv_fac[4'000'000] = x1;
	for (int i = 4'000'000 - 1; i > 0; i--) {
		inv_fac[i] = (inv_fac[i + 1] * (i + 1)) % MOD;
	}
	while (M--) {
		int N, K;
		cin >> N >> K;
		cout << fac[N] * inv_fac[K] % MOD * inv_fac[N-K] % MOD << "\n";
	}
}
