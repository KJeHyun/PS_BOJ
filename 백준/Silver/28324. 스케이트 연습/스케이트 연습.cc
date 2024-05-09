#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
	fast_io
		int N, a;
    ll v[500001], res = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		v[i] = a;
	}
	v[N - 1] = 1;
	for (int i = N-1; i > 0; i--) {
		if (v[i] - v[i - 1] >= 0) continue;
		else v[i - 1] = v[i] + 1;
	}

	for (int i = 0; i < N; i++) {  res += v[i]; }
	cout << res;
	return 0;
}
