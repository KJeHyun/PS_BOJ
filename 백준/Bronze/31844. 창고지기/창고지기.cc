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
	string s;
	cin >> s;
	int R, B, T;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '@') R = i;
		else if (s[i] == '#') B = i;
		else if (s[i] == '!') T = i;
	}
	if (R<B && T<B || R>B && T>B) {
		cout << -1;
		return 0;
	}
	else cout << abs(T - R) - 1;
}