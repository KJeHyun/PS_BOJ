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
	vector<tuple<int, int, string>> v;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int p; string s;
		cin >> p >> s;
		v.push_back({ p, i ,s });
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		cout << get<0>(v[i]) << " " << get<2>(v[i]) << "\n";
	}
}