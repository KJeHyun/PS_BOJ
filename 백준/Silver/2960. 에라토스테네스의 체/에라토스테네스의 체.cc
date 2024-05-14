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

int n, k;
vector<int> eratos() {
	vector<int> a(n + 1);
	vector<int> prime;
	for ( int i = 2; i <= n; i++) {
		if (!a[i]) {
			prime.push_back(i);
			a[i] = 1;
			for (int j = i * i; j <= n; j += i) {
				if (a[j]) continue;
				a[j] = 1;
				prime.push_back(j);
			}
		}
		else continue;
	}
	return prime;
}
int main() {
	fast_io;
	cin >> n >> k;
	cout << eratos()[k - 1];
}
