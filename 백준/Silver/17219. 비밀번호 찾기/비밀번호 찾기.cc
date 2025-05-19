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
	map<string, string> mp;
	int n, m;
	cin >> n >> m;
	string x, y;
	while (n--) {
		cin >> x >> y;
		mp[x] = y;
	}
	while (m--) {
		cin >> x;
		cout << mp[x] << "\n";
	}
}