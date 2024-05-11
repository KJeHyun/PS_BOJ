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
	int n;
	cin >> n;
	ll m = LLONG_MAX;
	ll res = 0;
	vector<int> d(n-1);
	for (int i = 0; i < n - 1; i++) {
		cin >> d[i];
	}
	for (int i = 0; i < n - 1 ; i++) {
		int p;
		cin >> p;
		m = min(m, ll(p));
		res += m * d[i];
	}
	cout << res;
}