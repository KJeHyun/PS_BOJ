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
	vector<int> v(n), s(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	sort(v.begin(), v.end());
	sort(s.begin(), s.end(), greater<>());
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += v[i] * s[i];
	}
	cout << ans;
}