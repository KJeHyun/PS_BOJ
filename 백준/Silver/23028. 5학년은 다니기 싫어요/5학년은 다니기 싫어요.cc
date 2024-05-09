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
	int N, a, b;
	cin >> N >> a >> b;
	int mj = a, tt = b;
	if (mj >= 66 && tt >= 130) {
		cout << "Nice";
		return 0;
	}
	for (int i = 0; i < 10; i++) {
		N++;
		if (N > 8) break;
		int x, y;
		cin >> x >> y;
		int mjs = 3*x;
		mj += mjs;
		tt += mjs;
		tt += min(18-mjs, 3*y);
	}
	if (mj >= 66 && tt >= 130) cout << "Nice";
	else cout << "Nae ga wae";
	return 0;
}