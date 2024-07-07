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
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n;
		vector<int> v;
		for (int i = 0; i < n; ++i) {
			int a;
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		cin >> m;
		for (int i = 0; i < m; ++i) {
			int x;
			cin >> x;
			if (binary_search(v.begin(),v.end(),x))
				cout << "1\n";
			else
				cout << "0\n";
		}
	}
}