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
	int s[6] = {};
	cin >> s[0] >> s[1] >> s[2] >> s[3] >> s[4] >> s[5];
	int t, p;
	cin >> t >> p;
	int x = 0;
	for (int i = 0; i < 6; ++i) {
		x += ceil(double(s[i]) / double(t));
	}
	cout << x << "\n";
	cout << n / p << " " << n - (n / p) * p;
}