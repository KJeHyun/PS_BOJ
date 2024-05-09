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
	cin >> a >> b >> c;
	if (a + b + c == 180) {
		if (a == b && b== c) {
			cout << "Equilateral";
			return 0;
		}
		else if (a == b || b == c || c == a) {
			cout << "Isosceles";
			return 0;
		}
		else {
			cout << "Scalene";
			return 0;
		}
	}
	else cout << "Error";
	return 0;
}