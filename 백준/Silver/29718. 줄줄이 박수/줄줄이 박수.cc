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
	int n, m;
	cin >> n >> m;
	vector<int> c(m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int k;
			cin >> k;
			c[j] += k;
		}
	}
	int a;
	cin >> a;
	int wSize = 0;
	int wSum = 0;
	int result = 0;
	for (int i = 0; i < m; i++) {
		if (wSize < a) {
			wSum += c[i];
			wSize++;
			if (wSize == a) result = max(result, wSum);
			continue;
		}
		wSum += c[i] - c[i - wSize];
		result = max(result, wSum);
	}
	cout << result;
	
}