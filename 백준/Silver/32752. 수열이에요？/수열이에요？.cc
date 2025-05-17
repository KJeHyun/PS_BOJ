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
	int N, L, R;
	cin >> N >> L >> R;
	int l = -1, c1 = INT_MAX, c2 = -1, r = INT_MAX, x;
	for (int i = 1; i < L; i++) {
		cin >> x;
		l = max(l, x);
	}
	for (int i = L; i <= R; i++) {
		cin >> x;
		c1 = min(c1, x);
		c2 = max(c2, x);
	}
	for (int i = R + 1; i <= N; i++) {
		cin >> x;
		r = min(r, x);
	}
	if (l <= c1 && c2 <= r) cout << 1;
	else cout << 0;
}