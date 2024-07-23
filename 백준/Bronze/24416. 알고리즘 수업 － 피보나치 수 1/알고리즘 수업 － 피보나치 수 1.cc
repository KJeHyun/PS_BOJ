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

int f[41];
int code1, code2;

int fib(int n) {
	if (n == 1 or n == 2) {
		code1++;
		return 1;
	}
	else return (fib(n - 1) + fib(n - 2));
}

int fibonacci(int n) {
	f[1] = f[2] = 1;
	for (int i = 3; i <= n; ++i) {
		f[i] = f[i - 1] + f[i - 2];
		code2++;
	}
	return f[n];
}

int main() {
	fast_io;
	int n;
	cin >> n;
	fib(n);
	fibonacci(n);
	cout << code1 << " " << code2 << "\n";
}