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
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i++) {
		int s; cin >> s;
		a[i] += a[i - 1] + s;
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (a[j] - a[i - 1] == m) cnt++;
		}
	}
	cout << cnt;
}
