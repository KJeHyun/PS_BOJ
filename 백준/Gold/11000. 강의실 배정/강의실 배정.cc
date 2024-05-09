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
	vector<pii> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].first >> a[i].second;
	}
	sort(a.begin(), a.end());
	priority_queue<int, vector<int>, greater<int>> p;
	for (int i = 0; i < n; i++) {
		if (!p.empty() && p.top() <= a[i].xx) {
			p.pop();
		}
		p.push(a[i].yy);
	}
	cout << p.size();
}