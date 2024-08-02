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

int g[1'000'001];

int main() {
	fast_io;
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		g[y] = x;
	}
	int l = 0, r = 0, wSz, wSum = g[0], wMax = -1;
	while (r < 1'000'001) {
		wSz = r - l;
		if (wSz != 2 * k) {
			r++;
			wSum += g[r];
			wMax = wSum;
			continue;
		}
		wSum -= g[l];
		l++;
		r++;
		wSum += g[r];
		wMax = max(wMax, wSum);
	}
	cout << wMax;
}