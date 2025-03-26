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
	string s;
	cin >> s;
	int z = 0, o = 0;
	for (char& c : s) {
		if (c == '0') z++;
		else o++;
	}
	z /= 2;
	o /= 2;
	for (int i = 0; i < s.length(); i++) {
		if (o == 0) break;
		if (s[i] == '1') {
			s[i] = NULL;
			o--;
		}
	}
	for (int i = s.length() - 1; i >= 0; i--) {
		if (z == 0) break;
		if (s[i] == '0') {
			s[i] = NULL;
			z--;
		}
	}
	for (char& c : s) if (c != NULL) cout << c;
}