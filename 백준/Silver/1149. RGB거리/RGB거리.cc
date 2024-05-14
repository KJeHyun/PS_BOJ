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

int r[1001], g[1001], b[1001];

int main() {
	fast_io;
	int n;
	cin >> n;
	int R, G, B;
	for (int i = 1; i <= n; i++) {
		cin >> R >> G >> B;
		r[i] = min(g[i - 1], b[i - 1]) + R;
		g[i] = min(r[i - 1], b[i - 1]) + G;
		b[i] = min(r[i - 1], g[i - 1]) + B;
	}
	cout << min({ r[n],g[n],b[n] });
}