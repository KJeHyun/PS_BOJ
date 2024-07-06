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
	int n;
	cin >> n;
	vector<pii> v(n);
	for (pii& i : v) cin >> i.xx >> i.yy;
	int m = INT_MAX, totalDst = 0, skipDst = 0;
	for (int i = 0; i < n - 1; ++i) {
		totalDst += abs(v[i].xx - v[i + 1].xx) + abs(v[i].yy - v[i + 1].yy);
	}
	for (int i = 0; i < n - 2; ++i) {
		skipDst = totalDst - (abs(v[i].xx - v[i + 1].xx) + abs(v[i].yy - v[i + 1].yy))
			- (abs(v[i + 1].xx - v[i + 2].xx) + abs(v[i + 1].yy - v[i + 2].yy))
			+ (abs(v[i].xx - v[i + 2].xx) + abs(v[i].yy - v[i + 2].yy));
		m = min(m, skipDst);
	}
	cout << m;
}