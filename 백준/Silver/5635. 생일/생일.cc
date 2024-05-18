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

bool cmp(const pair<string, tiii>& a, const pair<string, tiii>& b) {
	auto [da, ma, ya] = a.yy;
	auto [db, mb, yb] = b.yy;
	if (ya != yb) return ya > yb;
	if (ma != mb) return ma > mb;
	return da > db;
}

int main() {
	fast_io;
	int N;
	cin >> N;
	vector<pair<string, tiii>> s;
	for (int i = 0; i < N; i++) {
		string name;
		int d, m, y;
		cin >> name >> d >> m >> y;
		s.push_back({ name,make_tuple(d, m, y) });
	}
	sort(s.begin(), s.end(), cmp);
	cout << s[0].xx << '\n' << s[N - 1].xx;
}
