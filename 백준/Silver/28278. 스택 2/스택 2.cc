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
	stack<int> res;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		switch (a) {
		case 1:
			int X; cin >> X;
			res.push(X);
			break;
		case 2:
			if (!res.empty()) {
				cout << res.top() << '\n';
				res.pop();
			}
			else cout << -1 <<'\n';
			break;
		case 3:
			cout << res.size() << '\n';
			break;
		case 4:
			if (!res.empty()) cout << 0 << '\n';
			else cout << 1 << '\n';
			break;
		case 5:
			if (!res.empty()) {
				cout << res.top() << '\n';
			}
			else cout << -1 << '\n';
			break;
		}
	}
}