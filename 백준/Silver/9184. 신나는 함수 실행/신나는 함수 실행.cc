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

int dp[51][51][51];

int w(int a, int b, int c) {
	if (a <= 0 or b <= 0 or c <= 0) return 1;
	if (a > 20 or b > 20 or c > 20) return w(20, 20, 20);
	int& ret = dp[a][b][c];
	if (ret) return ret;
	if (a < b and b < c) ret = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	else ret = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	return ret;
}

int main() {
	fast_io;
	int A, B, C;
	while (1) {
		cin >> A >> B >> C;
		if (A == -1 && B == -1 && C == -1) break;
		cout << "w(" << A << ", " << B << ", " << C << ") = ";
		if (A <= 0 || B <= 0 || C <= 0) A = B = C = 0;
		else if (A > 20 || B > 20 || C > 20) A = B = C = 20;
		cout << w(A, B, C) << "\n";
	}
}