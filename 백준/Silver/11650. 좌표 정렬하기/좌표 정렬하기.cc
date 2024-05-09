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
	vector<pii> v;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		pii p;
		cin >> p.xx >> p.yy;
		v.push_back({ p.xx,p.yy });
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		cout << v[i].xx << " " << v[i].yy << "\n";
	}
}