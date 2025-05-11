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
	fast_io;;
	string s;
	getline(cin, s);
	int l, r = -1;
	while (s.find("What", r + 1) != -1) {
		l = s.find("What", r + 1);
		r = s.find("?", l + 1);
		string x = s.substr(l, r - l + 1);
		if (x.find(".") != -1) {
			r = s.find(".", l + 1);
			continue;
		}
		x.replace(0, 4, "Forty-two");
		x.replace(x.length() - 1, 1, ".");
		cout << x << "\n";
	}
}