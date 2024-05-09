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
	int n; cin >> n;
	vector<pii> v(n);
	stack<pii> ans;
	for (int i = 0; i < n; i++) {
		pii a;
		cin >> a.xx >> a.yy;
		v[i] = { a.xx,a.yy };
	}
	sort(v.begin(), v.end());
	for (auto& a : v) {
		if (!ans.empty() && a.yy < ans.top().yy) {
			ans.pop();
			ans.push(a);
		}
		else if (ans.empty() || a.xx >= ans.top().yy) {
			ans.push(a);
		}
	}
	cout << ans.size();
}