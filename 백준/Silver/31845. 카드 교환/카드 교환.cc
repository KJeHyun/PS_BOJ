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
	cin >> n >> m;
	vector<int> c(n);
	int plus = 0;
	for (int i = 0; i < n; i++) {
		cin >> c[i];
		if (c[i] > 0) plus++;
	}
	sort(c.begin(), c.end(), greater());
	int sz = c.size();
	sz = sz % 2 == 0 ? sz / 2 : sz / 2 + 1;
	int a = min({ sz,plus,m });
	int sum = 0;
	for (int i = 0; i < a; i++) {
		sum += c[i];
	}
	cout << sum;
}