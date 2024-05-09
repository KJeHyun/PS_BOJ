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

bool cmp(const pair<int,string>& a, const pair<int,string>& b) {
	if (a.xx == b.xx) return a.yy < b.yy;
	return a.xx > b.xx;
}
int main() {
	fast_io;
	map<string, int> m;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		m[s]++;
	}
	vector<pair<int, string>> v;
	for (auto& it : m) {
		v.push_back({ it.yy,it.xx });
	}
	sort(v.begin(), v.end(), cmp);
	cout << v[0].yy;
}