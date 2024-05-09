#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
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
	fast_io
		string s;
	int cnt = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'd' && i < s.length() - 2) {
			if (s[i + 1] == 'z' && s[i + 2] == '=') {
				cnt++;
				i += 2;
				continue;
			}
		}
			if (i != s.length() - 1) {
				if ((s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-')) ||
					(s[i] == 'd' && s[i + 1] == '-') ||
					(s[i] == 'l' && s[i + 1] == 'j') ||
					(s[i] == 'n' && s[i + 1] == 'j') ||
					(s[i] == 's' && s[i + 1] == '=') ||
					(s[i] == 'z' && s[i + 1] == '=')) {
					cnt++;
					i++;
					continue;
				}
			}
			cnt++;
	}
	cout << cnt;
}