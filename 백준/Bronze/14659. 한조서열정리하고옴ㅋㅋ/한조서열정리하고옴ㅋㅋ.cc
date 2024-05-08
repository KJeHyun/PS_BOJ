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
	int tmp = -1, cnt = 0, res = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (tmp >= a) {
			cnt++;
			continue;
		}
		else {
			tmp = a;
			res = max(res, cnt);
			cnt = 0;
		}
	}
	res = max(res, cnt);
	cout << res;
}