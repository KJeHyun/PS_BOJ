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
	int n;
	cin >> n;
	int a[26] = { 0 };
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		int pow = 1;
		for (int j = s.length() - 1; j >= 0; j--) {
			a[s[j] - 'A'] += pow;
			pow *= 10;
		}
	}
	std::sort(a, a + 26);
	std::reverse(a, a + 26);
	int res = 0;
	for (int i = 0; i < 9; i++) {
		res += a[i] * (9 - i);
	}
	cout << res;
}