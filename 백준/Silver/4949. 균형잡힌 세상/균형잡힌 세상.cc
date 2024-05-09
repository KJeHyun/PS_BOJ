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
	while (4949) {
		string s;
		getline(cin, s, '.');
		cin.ignore();
		if (s == "") break;
		stack<char> stk;
		for (auto& x : s) {
			if (!isalpha(x)&&x!=' ') {
				if (!stk.empty()) {
					if (stk.top() == '(' && x == ')') {
						stk.pop();
						continue;
					}
					if (stk.top() == '[' && x == ']') {
						stk.pop();
						continue;
					}
				}
				stk.push(x);
			}
		}
		if (stk.empty()) cout << "yes\n";
		else cout << "no\n";
	}
}