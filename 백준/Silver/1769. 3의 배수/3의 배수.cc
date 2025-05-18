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
	string x;
	int X = 0, Y, n = 1;
	cin >> x;
	for (int i = 0; i < x.length(); i++) {
		X += x[i] - '0';
	}
	Y = X;
	while (Y >= 10) {
		n++;
		Y = 0;
		do {
			Y += X % 10;
		} while (X /= 10);
		X = Y;
	}
	if (x.length() == 1) n--;
	cout << n << "\n";
	if (Y % 3) cout << "NO";
	else cout << "YES";
}