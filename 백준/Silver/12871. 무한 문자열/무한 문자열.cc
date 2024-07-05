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
	string s, t;
	cin >> s >> t;
	int LCM = lcm(s.length(), t.length());
	string tmpS = s, tmpT = t;
	while (s.length() < LCM) s += tmpS;
	while (t.length() < LCM) t += tmpT;
	if (s == t) {
		cout << "1\n";
	}
	else cout << "0\n";
}