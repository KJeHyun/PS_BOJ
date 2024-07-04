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
	int n;
	cin >> n;
	vector<int> v(n);
	double x = 0.;
	for (int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		v[i] = a - b;
	}
	sort(v.begin(), v.end());
	if (n % 2) {
		cout << 1;
	}
	else
		cout << v[n / 2] - v[n / 2 - 1] + 1;
}