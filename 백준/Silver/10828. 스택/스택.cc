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
	vector<int> v;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			int m;
			cin >> m;
			v.push_back(m);
		}
		else if (s == "top") {
			if (!v.empty()) {
				cout << v.back() << "\n";
			}
			else cout << -1 << "\n";
		}
		else if (s == "pop") {
			if (!v.empty()) {
				cout << v.back() << "\n";
				v.pop_back();
			}
			else cout << -1 << "\n";
		}
		else if (s == "size") {
			cout << v.size() << "\n";
		}
		else if (s == "empty") {
			if (v.empty()) {
				cout << 1 << "\n";
			}
			else cout << 0 << "\n";
		}
	}
	
}