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
	int q;
	cin >> q;
	while (q--) {
		ll x, y;
		cin >> x >> y;
		if (x >= 0 && y == 0)  cout << "0\n";
		else if ((x < 0 && y > 0) || (y < 0 && x < y)) cout << "2\n";
		else cout << "1\n";
		}
}