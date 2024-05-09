#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <deque>
#include <queue>
#include <stack>
#include <list>
#include <set>
#include <map>
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
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string s; cin >> s;
		stack<char> stk;
		for (char c:s) {
			if (c == '(') {
				stk.push(c);
			}
			else if (c == ')') {
				if (!stk.empty() && stk.top() == '(') {
					stk.pop();
				}
				else { 
					stk.push(c);
					break;
				}
			}
		}
		if (stk.empty()) cout << "YES\n";
		else cout << "NO\n";
	}
}