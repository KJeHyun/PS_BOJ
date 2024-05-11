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

int n, m;
vector<int> wood;

bool can(int a) {
	ll sum = 0;
	for (int i = 0; i < n; i++) {
		sum += max(0, wood[i] - a);
	}
	return (sum >= m);
}

int bi_search() {
	int lo = 0, hi = 1'000'000'001;
	while (lo + 1 < hi) {
		int mid = (lo + hi) >> 1;
		if (can(mid)) lo = mid;
		else hi = mid;
	}
	return lo;
}

int main() {
	fast_io;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		wood.push_back(x);
	}
	cout << bi_search();
}