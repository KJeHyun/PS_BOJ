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

int cnt[1000001];

int main() {
	fast_io;
	int n;
	cin >> n;
	vector<pii> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].xx;
		a[i].yy = i;
		cnt[a[i].xx]++;
	}
	stack<pii> stk;
	vector<int> res(n, - 1);
	for (int i = 0; i < n; i++) {
		while (!stk.empty() && cnt[stk.top().xx] < cnt[a[i].xx]) {
			res[stk.top().yy] = a[i].xx;
			stk.pop();
		}
		stk.push(a[i]);
	}
	for (auto& x : res) cout << x << " ";
}
