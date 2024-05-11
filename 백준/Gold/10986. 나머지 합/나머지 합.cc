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
	int n, m;
	cin >> n >> m;
	vector<ll> a(n + 1);
	vector<ll> x(m);
	ll res = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		a[i] = (a[i] + a[i - 1]) % m;
		x[a[i]]++;
	}
	for (int i = 0; i < m; i++) {
		res += x[i] * (x[i] - 1) / 2;
	}
	res += x[0];
	cout << res;
}