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
	vector<int> v(n);
	for (int& i : v) cin >> i;
	sort(v.begin(), v.end());
	vector<ll> dist(n - 1);
	for (int i = 0; i < n - 1; ++i) {
		dist[i] = v[i + 1] - v[i];
	}
	ll res = 0;
	for (ll i = 0; i < n - 1; ++i) {
		res += dist[i] * (i + 1) * (n - i - 1);
	}
	res *= 2;
	cout << res << "\n";
}