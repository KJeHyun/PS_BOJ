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
	vector<pair<int,string>> v;
	for (int i = 0; i < n; i++) {
		string x;
		cin >> x;
		v.push_back({ x.length(),x });
	}
	sort(v.begin(), v.end());
	int i = 0;
	for(;i<n;++i) {
		if (i > 0 && v[i].yy == v[i - 1].yy) continue;
		cout << v[i].yy << '\n';
	}
}