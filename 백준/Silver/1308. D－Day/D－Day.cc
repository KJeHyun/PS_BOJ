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

bool isL(int& year) { 
	if (year % 400 == 0) return true;
	else if (year % 100 == 0) return false;
	else if (year % 4 == 0) return true;
	else return false;
}
int dm(int& year, int& month) {
	if (month == 4 || month == 6 || month == 9 || month == 11) {
		return 30;
	}
	else if (month == 2) return isL(year) ? 29 : 28;
	else return 31;
}
int main() {
	fast_io;
	int y, m, d, yd, md, dd;
	cin >> y >> m >> d >> yd >> md >> dd;
	if (yd > y + 1000 || yd == y + 1000 && ((md > m) || (md == m) && dd >= d)){ 
		cout << "gg";
		return 0;
	}
	int res = 0;
	if (y < yd) {
		for (int i = y+1; i < yd; i++) {
			res += isL(i) ? 366 : 365;
		}
		for (int i = 1; i < md; i++) {
			res += dm(yd, i);
		}
		res += dd;
		for (int i = m; i <= 12; i++) {
			res += dm(y, i);
		}
		res -= d;
	}
	else {
		if (m < md) {
			for (int i = m; i < md; i++) {
				res += dm(y, i);
			}
		}
		res += dd - d;
	}
	cout << "D-" << res;
}