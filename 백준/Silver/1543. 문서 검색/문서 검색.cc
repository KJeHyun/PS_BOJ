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
	int cnt = 0;
	string s, t;
	getline(cin, s);
	getline(cin, t);
	for (int i = 0; i < s.length(); i++) {
		if (s.substr(i, t.length()) == t) {
			cnt++;
			i = i + t.length() - 1;
		}
	}
	cout << cnt;
}