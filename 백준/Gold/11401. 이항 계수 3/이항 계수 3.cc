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
	int N, K;
	const ll MOD = 1'000'000'007;
	cin >> N >> K;
	vector<ll> fac(4'000'001, 1);
	for (int i = 1; i <= 4'000'000; i++) {
		fac[i] = (fac[i - 1] * i) % MOD;
	}
	auto [g1, x1, y1] = xGCD(fac[K], MOD);
	x1 = x1 < 0 ? MOD + x1 : x1;
	auto [g2, x2, y2] = xGCD(fac[N - K], MOD);
	x2 = x2 < 0 ? MOD + x2 : x2;
	cout << fac[N] * x1 % MOD * x2 % MOD;
}
