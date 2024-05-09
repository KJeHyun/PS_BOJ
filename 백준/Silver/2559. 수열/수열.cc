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
	vector<int> a(n);
	for (auto& i : a) cin >> i;
	int Max = -100000001;
	int wSum = 0, wSize = 0;
	for (int i = 0; i < n; i++) {
		if (wSize < k) {
			wSum += a[i];
			wSize++;
			if (wSize == k) Max = max(Max, wSum);
			continue;
		}
		wSum += (a[i] - a[i - wSize]);
		Max = max(Max, wSum);
	}
	cout << Max;
}