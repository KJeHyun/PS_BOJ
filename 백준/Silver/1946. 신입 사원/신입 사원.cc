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
		int n;
		cin >> n;
		int res = 1;
		vector<pii> x(n);
		for (int i = 0; i < n; i++) {
			cin >> x[i].xx >> x[i].yy;
		}
		sort(x.begin(), x.end());
		int M = x[0].yy;
		for (int i = 1; i < n; i++) {
			if (x[i].yy < M) res++;
			M = min(M, x[i].yy);
		}
		cout << res << "\n";
	}
	
}