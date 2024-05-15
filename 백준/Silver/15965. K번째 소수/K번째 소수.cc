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

int k;
ll primeK() {
	vector<ll> prime, table(10'000'001, 0);
	for (ll i = 2;i<= 10'000'000; i++) {
		if (table[i]) continue;
		table[i] = 1;
		prime.push_back(i);
		for (ll j = i * i;j<= 10'000'000; j+=i) {
			if (table[j]) continue;
			table[j] = 1;
		}
	}
	return prime[k - 1];
}

int main() {
	fast_io;
	cin >> k;
	cout << primeK();
}
