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
	string s, e;
	cin >> s >> e;
	string result;
	for (char c : s) {
		result.push_back(c);
		if (result.length() >= e.length() && result.substr(result.length() - e.length()) == e) {
			result.erase(result.length() - e.length());
		}
	}
	if (result.empty()) {
		cout << "FRULA";
	}
	else {
		cout << result;
	}
	return 0;
}