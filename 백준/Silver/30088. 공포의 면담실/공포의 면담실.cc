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
	vector<ll> A(n);
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		ll sum = 0, tmp;
		for (int j = 0; j < a; j++) {
			cin >> tmp;
			sum += tmp;
		}
		A[i] = sum;
	}
	sort(A.begin(), A.end());
	ll res = 0;
	for (int i = 0; i < n; i++) {
		res += A[i] * (n - i);
	}
	cout << res;
}
