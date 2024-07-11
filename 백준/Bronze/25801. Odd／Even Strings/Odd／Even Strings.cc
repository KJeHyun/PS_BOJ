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

int cnt[26];

int main() {
	fast_io;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); ++i) {
		cnt[s[i] - 'a']++;
	}
	bool isOdd = false, isEven = false;
	for (int i = 0; i < 26; ++i) {
		if (!cnt[i]) continue;
		if (cnt[i] % 2) isEven = true;
		else isOdd = true;
	}
	if (isEven && !isOdd) cout << "1";
	else if (!isEven && isOdd) cout << "0";
	else cout << "0/1";
}