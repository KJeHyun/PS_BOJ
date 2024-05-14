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

ll GCD(ll a, ll b) {
	return b == 0 ? a : GCD(b, a % b);
}
int main() {
	fast_io;
	ll n, k;
	cin >> n >> k;
	ll cnt = GCD(n, k);
	for (ll i = 0; i < cnt; i++) {
		cout << 1;
	}
}
