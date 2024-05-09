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
	int n;
	cin >> n;
	vector<int> qs(n);
	deque<int> dq;
	for (int i = 0; i < n; i++) {
		cin >> qs[i];
	}
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		if(!qs[i]) dq.push_front(b);
	}
	int m; cin >> m;
	for (int i = 0; i < m; i++) {
		int c; cin >> c;
		dq.push_back(c);
		cout << dq.front() << ' ';
		dq.pop_front();
	}
}