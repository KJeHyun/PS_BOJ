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

bool F(const string& a) {
	if (a.length() > 10) return false;
	int L = 0, s = 0, hypen = 0;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] >= 'a' && a[i] <= 'z') s++;
		else if (a[i] >= 'A' && a[i] <= 'Z') L++;
		else if (a[i] == '-') hypen++;
	}
	if (L > s || (L == 0 && s == 0 && hypen == 0)) return false;
	return true;
}
int main() {
	fast_io;
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		if (F(s)) cout << s;
	}
}