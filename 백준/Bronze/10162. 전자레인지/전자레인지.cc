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
	if (n % 10 != 0) {
		cout << -1;
		return 0;
	}
	int a = 0, b = 0, c = 0;
	if (n>=300) {
		a = n / 300;
		n -= a * 300;
	}
	if (n >= 60) {
		b = n / 60;
		n -= b * 60;
	}
	cout << a << " " << b << " " << n/10;
}