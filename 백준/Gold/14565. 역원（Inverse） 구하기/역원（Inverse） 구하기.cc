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
	ll N, A;
	cin >> N >> A;
	auto [g, x, y] = xGCD(A, N);
	cout << N - A << " ";
	if (g != 1) cout << -1;
	else cout << (x < 0 ? N + x : x);
}
