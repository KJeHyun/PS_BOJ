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
	vector<pii> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].xx >> v[i].yy;
	}
	sort(v.begin(), v.end());
	int L = v[0].xx, R = v[0].yy, len = 0;
	for (int i = 1; i < n; i++) {
		if (v[i].xx <= R) R = max(R, v[i].yy);
		else {
			len += R - L;
			L = v[i].xx;
			R = v[i].yy;
		}
	}
	len += R - L;
	cout << len;
}