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
vector<int> a;

bool can(int k) {
	int cnt = 1;
	int prev = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] - prev >= k) {
			prev = a[i];
			cnt++;
		}
	}
	if (cnt >= m) return true;
	return false;
}
int bi_search() {
	int lo = 1;
	int hi = a[n - 1] + 1;
	while (lo + 1 < hi) {
		int mid = (lo + hi) / 2;
		if (can(mid)) lo = mid;
		else hi = mid;
	}
	return lo;
}
int main() {
	fast_io;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
	cout << bi_search();
}