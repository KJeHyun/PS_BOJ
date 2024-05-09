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
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s; 
 		list<char> lst;
 		auto it = lst.begin();
		for (auto op : s) {
			if (op == '<' && it != lst.begin()) it--;
			else if (op == '>' && it != lst.end()) it++;
			else if (op == '-' && it != lst.begin())it = lst.erase(--it);
			else if(op != '<' && op != '>' && op != '-') lst.insert(it, op);
		}
		for (auto x : lst) cout << x;
		cout << '\n';
	}
}