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
	int n, m, min, cnt = 0;
	cin >> m >> n;
	for (int i = m; i < n+1; i++) {
		bool b = true;
		if (i == 1) continue;
		for (int j = 2; j <= i / 2; j++) {
			if (i % j == 0) {
				b = false;
				break;
			}
		}
		if (b) {
			if (cnt == 0) min = i;
			cnt += i;
		}
	}
	if (cnt != 0) cout << cnt << '\n' << min;
	else cout << -1;
}