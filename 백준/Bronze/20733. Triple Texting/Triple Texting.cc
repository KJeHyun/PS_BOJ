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
	string s, s1, s2, s3;
	cin >> s;
	s1 = s.substr(0, s.length() / 3);
	s2 = s.substr(s.length() / 3, s.length() / 3);
	s3 = s.substr(2 * s.length() / 3);
	if (s1 == s2 || s1 == s3) cout << s1;
	else if (s2 == s3) cout << s2;
}