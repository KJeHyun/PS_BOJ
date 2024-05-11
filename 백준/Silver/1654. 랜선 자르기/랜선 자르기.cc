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

int k, n;
vector<ll> r;

bool can(int a) {
	ll cnt = 0;
	for (int i = 0; i < k; i++) {
		cnt += r[i] / a;
	}
	return (cnt >= n);
}

int bi_search() {
	ll lo = 1, hi = r[k - 1] + 1;
	while (lo + 1 < hi) {
		ll mid = (lo + hi) >> 1;
		if (can(mid)) lo = mid;
		else hi = mid;
	}
	return lo;
}

int main() {
	fast_io;
	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		ll x;
		cin >> x;
		r.push_back(x);
	}
	sort(r.begin(), r.end());
	cout << bi_search();
}