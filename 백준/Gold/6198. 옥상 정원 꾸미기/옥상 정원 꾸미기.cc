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
	int n; ll cnt = 0;
	cin >> n;
	stack<int> bd;
	for (int i = 0; i < n; i++) {
		int h; cin >> h;
		while (!bd.empty() && bd.top() <= h) {
			bd.pop();
		}
		cnt += bd.size();
		bd.push(h);
	}
	cout << cnt;
}