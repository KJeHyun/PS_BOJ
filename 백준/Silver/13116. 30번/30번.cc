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

int p(int a, int b) {
	while (a != b) {
		if (a > b) a /= 2;
		else b /= 2;
	}
	return a;
}

int main() {
	fast_io;
	int T;
	cin >> T;
	int x, y;
	while (T--) {
		cin >> x >> y;
		cout << 10 * p(x, y) << "\n";
	}
}