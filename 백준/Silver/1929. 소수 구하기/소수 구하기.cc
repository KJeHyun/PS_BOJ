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

int m, n;
vector<ll> eratos() {
	vector<ll> prime, table(n + 1, 0);
	for (ll i = 2; i <= n; i++) {
		if (table[i]) continue;
		table[i] = 1;
		if (i >= m && i <= n)prime.push_back(i);
		for (ll j = i * i; j <= n; j += i) {
			if (table[j]) continue;
			table[j] = 1;
		}
	}
	return prime;
}

int main() {
	fast_io;
	cin >> m >> n;
	vector<ll> p = eratos();
	for (auto& i : p) cout << i << "\n";
}
