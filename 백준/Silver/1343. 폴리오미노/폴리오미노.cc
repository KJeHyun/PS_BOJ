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
	int len = 0;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == '.') {
			if (len == 2) {
				s[i - 2] = 'B';
				s[i - 1] = 'B';
				len = 0;
			}
			else if (len != 0) {
				cout << -1 << "\n";
				return 0;
			}
			continue;
		}

		len++;

		if (len == 4) {
			for (int j = i - 3; j <= i; ++j) {
				s[j] = 'A';
			}
			len = 0;
		}
	}
	if (len == 4) {
		for (int j = s.length() - 4; j < s.length(); ++j) {
			s[j] = 'A';
		}
	}
	else if (len == 2) {
		s[s.length() - 2] = 'B';
		s[s.length() - 1] = 'B';
	}
	else if (len != 0) {
		cout << "-1\n";
		return 0;
	}
	cout << s << "\n"; 
}