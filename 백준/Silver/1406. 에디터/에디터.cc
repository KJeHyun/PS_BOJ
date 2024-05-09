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
	string s;
	cin >> s;
	list<char> lst;
	auto it = lst.begin();
	for (auto c : s) {
		lst.insert(it,c);
	}
	int t;
	cin >> t;
	while (t--) {
		char op; cin >> op;
		if (op == 'L' && it != lst.begin()) it--;
		else if (op == 'D' && it != lst.end()) it++;
		else if (op == 'B' && it != lst.begin()) it = lst.erase(--it);
		else if (op == 'P') {
			char ss;
			cin >> ss;
			lst.insert(it, ss);
		}
	}
	for (auto x : lst) cout << x;
}