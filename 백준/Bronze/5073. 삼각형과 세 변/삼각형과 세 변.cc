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
	int a, b, c;
	for (;;) {
		cin >> a >> b >> c;
		if (a == 0 || b == 0 || c == 0) break;
		if (!(a + b <= c) && !(b + c <= a) && !(c + a <= b)) {
			if (a == b && b == c) {
				cout << "Equilateral\n";
			}
			else if (a == b || b == c || c == a) {
				cout << "Isosceles\n";
			}
			else {
				cout << "Scalene\n";
			}
		}
		else cout << "Invalid\n";
	}
}