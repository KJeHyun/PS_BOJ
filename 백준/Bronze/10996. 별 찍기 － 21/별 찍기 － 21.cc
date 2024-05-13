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
	string s1, s2;
	if (n == 1) {
		cout << "*";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		s1.push_back((i % 2 == 0) ? '*' : ' ');
		s2.push_back((i % 2 == 0) ? ' ' : '*');
	}
	for (int i = 0; i < 2*n; i++) {
		if (i % 2 == 0) cout << s1;
		else cout << s2;
		cout << "\n";
	}
}