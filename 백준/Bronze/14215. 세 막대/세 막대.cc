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
	int a[4] = {};
	cin >> a[1] >> a[2] >> a[3];
	sort(a, a + 4);
	if (a[3] >= a[1] + a[2]) {
		a[3] = a[1] + a[2] - 1;
	}
	cout << a[1] + a[2] + a[3];
}