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
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		int res = 0, cnt = 0;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'O') cnt++;
			else {
				res += cnt * (cnt + 1) / 2;
				cnt = 0;
			}
		}
		res += cnt * (cnt + 1) / 2;
		cout << res << "\n";
	}
}