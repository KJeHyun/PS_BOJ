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
int n;
int MAX = 1'003'001;
vector<ll> eratos(int n) {
	vector<ll> table(MAX + 1, 0);
	vector<ll> prime;
	for (ll i = 2; i <= MAX; i++) {
		if (table[i]) continue;
		table[i] = 1;
		if (i >= n) prime.push_back(i);
		for (ll j = i * i; j <= MAX; j += i) {
			if (table[j]) continue;
			table[j] = 1;
		}
	}
	return prime;
}
ll pld(vector<ll>& v) {
	for (auto& x : v) {
		ll org = x, t = x, rev = 0;
		while (t > 0) {
			rev = rev * 10 + t % 10;
			t /= 10;
		}
		if (org == rev) return x;
	}
}
int main() {
	fast_io;
	cin >> n;
	vector<ll> f = eratos(n);
	cout << pld(f);
}
