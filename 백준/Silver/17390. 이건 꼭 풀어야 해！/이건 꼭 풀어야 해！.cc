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
	int n, q;
	cin >> n >> q;
	vector<int> v(n);
	for (int& i : v) cin >> i;
	sort(v.begin(), v.end());
	vector<int> s(n + 1);
	s[0] = 0;
	for (int i = 0; i < n; i++) {
		s[i + 1] = s[i] + v[i];
	}
	while (q--) {
		int x, y;
		cin >> x >> y;
		cout << s[y] - s[x - 1] <<  "\n";
	}
}