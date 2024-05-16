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

#define MAX 5'000'000
vector<ll> table(MAX + 1);
vector<ll> eratosthenes() {
	for (ll i = 2; i <= MAX; i++) {
		if (table[i]) continue;
		table[i] = i;
		for (ll j = i * i; j <= MAX; j += i) {
			table[j ] = i;
		}
	}
	return table;
}

int main() {
	fast_io;
	int n;
	cin >> n;
	eratosthenes();
	while (n--) {
		int k;
		cin >> k;
		int tmp = k;
		vector<int> v;
		while (tmp > 1) {
			v.push_back(table[tmp]);
			tmp /= table[tmp];
		}
		sort(v.begin(), v.end());
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << (i == v.size() - 1 ? "\n" : " ");
		}
	}
}
