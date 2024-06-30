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

bool cmp(string s, string t) {
	if (s.length() != t.length()) return s.length() < t.length();
	int ss = 0, tt = 0;
	for (int i = 0; i < s.length(); ++i) {
		if (isdigit(s[i])) ss += s[i] - '0';
		if (isdigit(t[i])) tt += t[i] - '0';
	}
	if (ss != tt) return ss < tt;
	return s < t;
}

int main() {
	int n;
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(), cmp);
	for (string s : v) cout << s << "\n";
}