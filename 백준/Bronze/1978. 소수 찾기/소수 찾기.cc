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
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		bool b = true;
		cin >> a;
		if (a == 1) continue;
		for (int j = 2; j <= a / 2; j++) {
			if (a % j == 0) {
				b = false;
				break;
			}
		}
		if (b) cnt++;
	}
	cout << cnt;
}