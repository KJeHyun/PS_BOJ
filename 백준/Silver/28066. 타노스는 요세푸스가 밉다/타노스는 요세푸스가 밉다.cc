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
	int n, k;
	cin >> n >> k;
	int t = n / k;
	if (n % k == 0) t++;
	queue<int> csm;
	for (int i = 1; i <= n; i++) {
		csm.push(i);
	}
	while (csm.size()>=k) {
		csm.push(csm.front());
		for (int i = 0; i < k; i++) {
			csm.pop();
		}
	}
	cout << csm.front();
}