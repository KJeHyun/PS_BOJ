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
	set<int> a, b;
	int cnt = n + m;
	int x;
	for (int i = 0; i < n+m; i++) {
		cin >> x;
		a.insert(x);
	}
	int t = cnt - a.size();
	cnt -= 2*t;
	cout << cnt;
}