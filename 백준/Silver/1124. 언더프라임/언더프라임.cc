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

int A, B;
vector<ll> table;
vector<ll> eratos(int x) {
	table.resize(x + 1);
	vector<ll> prime;
	for (ll i = 2; i <= B; i++) {
		if (table[i]) continue;
		table[i] = i;
		if (i <= B) prime.push_back(i);
		for (ll j = i * i; j <= B; j += i) {
			if (table[j]) continue;
			table[j] = i;
		}
	}
	return prime;
}
int underPrime(const vector<ll>& v) {
	int count = 0;
	for (int i = A; i <= B; i++) {
		int tmp = i, cnt = 0;
		for (auto& j : v) {
			while (tmp % j == 0) {
				tmp /= j;
				cnt++;
			}
			if (tmp == 1) break;
		}
		if (table[cnt] == cnt) count++;
	}
	return count;
}
int main(){
	fast_io;
	cin >> A >> B;
	cout << underPrime(eratos(B));
}