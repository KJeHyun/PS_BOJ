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
	int n, maxX = -10001, minX = 10001, maxY = -10001, minY = 10001;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		maxX = max(a, maxX);
		minX = min(a, minX);
		maxY = max(b, maxY);
		minY = min(b, minY);
	}
	cout << (maxX - minX) * (maxY - minY);
}