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
	int t, a, b;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		a %= 10;
		if (a == 0) {
			cout << 10 << '\n';
			continue;
		}
		int A[] = { a, (a * a) % 10, (a * a * a) % 10, (a * a * a * a) % 10 };
		cout << A[(b - 1) % 4];
		cout << '\n';
	}
}