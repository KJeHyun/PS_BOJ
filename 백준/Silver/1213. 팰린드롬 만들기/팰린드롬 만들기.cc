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
	string im;
	cin >> im;
	vector<int> a(26);
	for (auto& c : im) {
		a[c - 'A']++;
	}
	int odd = 0, oddIndex = -1;
	for (int i = 0; i < 26;i++) {
		if (a[i] % 2 == 1) {
			odd++;
			oddIndex = i;
		}
	}
	if (im.length() % 2 == 0 && odd == 1 || odd > 1) {
		cout << "I'm Sorry Hansoo";
		return 0;
	}
	string s = "", mid = "";
	if (oddIndex != -1) {
		mid = oddIndex + 'A';
		a[oddIndex]--;
	}
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < a[i] / 2; j++) {
			s += i + 'A';
		}
	}
	cout << s + mid;
	reverse(s.begin(), s.end());
	cout << s;
}
