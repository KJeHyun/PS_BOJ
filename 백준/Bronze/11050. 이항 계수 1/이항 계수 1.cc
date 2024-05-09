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
	int n, k;
	cin >> n >> k;
	int a = 1, b = 1;
	for (int i = n - k + 1; i <= n; i++) {
		a *= i;
	}
	for (int i = 1; i <= k; i++) {
		b *= i;
	}
	cout << a / b;
}