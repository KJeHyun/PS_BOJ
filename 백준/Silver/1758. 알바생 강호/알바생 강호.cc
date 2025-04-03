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
	ll n;
	cin >> n;
	vector<ll> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(), greater());
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		ll t = v[i] - i;
		if (t > 0) ans += t;
	}
	cout << ans;
}