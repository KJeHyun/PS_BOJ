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

class Data {
public:
	int idx, num;
};

int main() {
	fast_io;
	int n; cin >> n;
	stack<Data> s;
	vector<int> res(n, -1);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		while (!s.empty() && s.top().num < a) {
			res[s.top().idx] = a;
			s.pop();
		}
		s.push({i, a});
	}

	for (int i = 0; i < n; i++) {
		cout << res[i] << ' ';
	}
	return 0;
}