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
	int n;
	cin >> n;
	vector<ll> A(n + 1), B(n + 1);
	for (int i = 1; i <= n; i++) {
		int a; cin >> a;
		A[i] = A[i - 1] + a * a;
		B[i] = B[i - 1] + a;
	}
	ll M = 0;
	for (int i = 1; i <= n; i++) {
		M = max(M, A[i] * (B[n] - B[i]));
	}
	cout << M;
}
