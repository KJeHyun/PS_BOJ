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
	int N; cin >> N;
	queue<int> r;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			int a; cin >> a;
			r.push(a);
		}
		else if (s == "pop") {
			if (!r.empty()) {
				cout << r.front() << '\n';
				r.pop();
			}
			else cout << -1 << '\n';
		}
		else if (s == "size") {
			cout << r.size() << '\n';
		}
		else if (s == "empty") {
			if (r.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (s == "front") {
			if (!r.empty()) cout << r.front() << '\n';
			else cout << -1 << '\n';
		}
		else {
			if (!r.empty()) cout << r.back() << '\n';
			else cout << -1 << '\n';
		}
		
	}
}