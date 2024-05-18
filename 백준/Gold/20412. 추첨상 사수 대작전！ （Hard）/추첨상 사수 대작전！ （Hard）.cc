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
	ll m, seed, x1, x2, A, C;
	cin >> m >> seed >> x1 >> x2;
	auto [g, x, y] = xGCD((x1 - seed + m) % m, m);
	x = (x + m) % m;
	A = (x2 - x1 + m) * x % m;
	C = (x1 - A * seed + m) % m;
	if (C < 0) C += m;
	cout << A << ' ' << C; 
}