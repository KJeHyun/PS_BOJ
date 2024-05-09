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
	int n,m;
	cin >> n>>m;
	set<string> d;
	set<string> b;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		d.insert(a);
	}
	for (int i = n; i < n+m; i++) {
		string a;
		cin >> a;
		if(d.count(a)) b.insert(a);
	}
	auto ans = b.begin();
	cout << b.size() << "\n";
	for (int i = 0; i < b.size(); i++) {
		cout << *ans++ << "\n";
	}
}