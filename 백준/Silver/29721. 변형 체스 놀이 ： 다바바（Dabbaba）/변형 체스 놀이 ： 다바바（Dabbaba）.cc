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
	int n, k;
	cin >> n >> k;
	set<pii> dbb;
	for (int i = 0; i < k; ++i) {
		int x, y;
		cin >> x >> y;
		dbb.insert({ x,y });
		x -= 2;
 		if (x <= n && x > 0 && y <= n && y > 0) dbb.insert({ x,y });
		x += 4;
 		if (x <= n && x > 0 && y <= n && y > 0) dbb.insert({ x,y });
		x -= 2; y -= 2;
 		if (x <= n && x > 0 && y <= n && y > 0) dbb.insert({ x,y });
		y += 4;
		if (x <= n && x > 0 && y <= n && y > 0) dbb.insert({ x,y });
	}
	cout << dbb.size() - k;
}