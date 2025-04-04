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
	int n, a, b, cnt = 1;
	cin >> n >> a >> b;
	if (a > b) swap(a, b);
	while (1) {
		if (b - a == 1 && a % 2 && !(b % 2))
			break;
		++a /= 2;
		++b /= 2;
		cnt++;
	}
	cout << cnt;
}