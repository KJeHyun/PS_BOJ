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

int f(string n) {
	int cnt = 0;
	do {
		int len = n.length();
		string s = n;
		reverse(s.begin(), s.end());
		if (s == n) return cnt;
		cnt++;
		n = to_string(stoi(n) + 1);
		while (n.length() != len) {
			n = '0' + n;
		}
		
	} while (1);
}

int main() {
	fast_io;
	string x;
	while (cin >> x) {
		if (x == "0") break;
		cout << f(x) << "\n";
	}
}