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
	string a, b, x, y;
	for (int i = 0; i < n; i++) {
		cin >> a;
		x += a;
	}
	for (int i = 0; i < n; i++) {
		cin >> b;
		y += b;
	}
	ll xl = stoll(x);
	ll yl = stoll(y);
	if (xl == yl) cout << xl;
	else cout << ((xl < yl) ? xl : yl);
}