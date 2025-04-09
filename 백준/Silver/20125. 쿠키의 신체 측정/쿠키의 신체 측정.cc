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
	vector<vector<char>> v(n, vector<char>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
		}
	}
	pii heart;
	int a = 0, l_a = 0, r_a = 0, wr = 0, l_l = 0, r_l = 0;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (v[i][j] == '*' && v[i][j + 1] == '*') {
				a = i;
				break;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (v[a - 1][i] == '*') {
			heart = { a,i };
			break;
		}
	}
	for (int i = 0; i < heart.yy; i++) {
		if (v[heart.xx][i] == '*') l_a++;
	}
	for (int i = heart.yy + 1; i < n; i++) {
		if (v[heart.xx][i] == '*') r_a++;
	}
	for (int i = heart.xx + 1; i < n; i++) {
		if (v[i][heart.yy] == '*') wr++;
	}
	for (int i = heart.xx + wr + 1; i < n; i++) {
		if (v[i][heart.yy - 1] == '*') l_l++;
	}
	for (int i = heart.xx + wr + 1; i < n; i++) {
		if (v[i][heart.yy + 1] == '*') r_l++;
	}

	cout << heart.xx + 1 << " " << heart.yy + 1 << "\n";
	cout << l_a << " " << r_a << " " << wr << " " << l_l << " " << r_l << "\n";
}