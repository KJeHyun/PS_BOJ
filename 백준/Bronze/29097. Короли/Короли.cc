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

bool cmp(pair<int, string> p1, pair<int, string> p2) {
	if (p1.xx != p2.xx) return p1 > p2;
	return p1.yy < p2.yy;
}

int main() {
	fast_io;
	int n, m, k, a, b, c;
	cin >> n >> m >> k >> a >> b >> c;
	int j, r, s;
	j = n * a;
	r = m * b;
	s = k * c;
	vector<pair<int, string>> v;
	v.push_back({ j,"Joffrey" });
	v.push_back({ r, "Robb" });
	v.push_back({ s,"Stannis" });
	sort(v.begin(), v.end(), cmp);
	cout << v[0].yy;
	if (v[0].xx == v[1].xx) cout << " " << v[1].yy;
	if (v[0].xx == v[2].xx) cout << " " << v[2].yy;
}