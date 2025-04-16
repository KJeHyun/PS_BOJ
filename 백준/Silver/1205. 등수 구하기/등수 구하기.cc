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
	int n, t, p, rank = -1;
	cin >> n >> t >> p;
	vector<int> v(n);
	if (n != 0) {
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			if (rank == -1 && t >= v[i])
				rank = i + 1;
		}
		if (t == v[n - 1]) {
			if (n == p) rank = n + 1;
		}
		else if (t < v[n - 1]) {
			rank = n + 1;
		}
	}
	else if (p >= 1) rank = 1;
	if (rank <= p) cout << rank;
	else cout << -1;
}