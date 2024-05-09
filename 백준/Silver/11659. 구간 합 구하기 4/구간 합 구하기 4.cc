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
	vector<int> sum(n + 1, 0);
	for (int i = 1; i < n + 1; i++) {
		int a;
		cin >> a;
		sum[i] = sum[i - 1] + a;
	}
	for (int i = 0; i < m; i++) {
		int b, c;
		cin >> b >> c;
		cout << sum[c] - sum[b - 1] << "\n";
	}
}