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
	vector<ll> a;
	for (int i = 0; i < n; i++) {
		ll b;
		cin >> b;
		a.push_back(b);
	}
	sort(a.begin(), a.end());
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		ll c;
		cin >> c;
		if (binary_search(a.begin(), a.end(), c)) cout << "1\n";
		else cout << "0\n";
	}
}