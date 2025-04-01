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

int cnt[9];

int main() {
	fast_io;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '6' || s[i] == '9')
			cnt[6]++;
		else cnt[s[i] - '0']++;
	}
	if (cnt[6] % 2) cnt[6]++;
	cnt[6] /= 2;
	cout << max({ cnt[0], cnt[1], cnt[2], cnt[3] , cnt[4] , cnt[5] , cnt[6] , cnt[7] , cnt[8] });
}