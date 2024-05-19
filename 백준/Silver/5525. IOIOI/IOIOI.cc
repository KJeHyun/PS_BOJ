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
	int n, m;
	string s;
	cin >> n >> m >> s;
	int res = 0, cnt = 0;
	for (int i = 1; i < m; i++) {
		if (s[i - 1] == 'I' && s[i] == 'O') {
			i++;
			if (i < m && s[i] == 'I') {
				cnt++;
				if (cnt == n) {
					res++;
					cnt--;
				}
			}
			else cnt = 0;
		}
		else cnt = 0;
	}
	cout << res;
}