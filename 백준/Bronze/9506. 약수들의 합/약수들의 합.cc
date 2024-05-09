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
	for (;;) {
		int n, sum = 0;
		cin >> n;
		if (n == -1) break;
		vector<int> d;
		for (int i = 1; i <= n / 2; i++) {
			if (n % i == 0) {
				d.push_back(i);
				sum += i;
			}
		}
		if (sum == n) {
			cout << n << " = ";
			for (int i = 0; i < d.size(); i++) {
				cout << d[i] << ((i != d.size() - 1) ? " + " : "\n");
			}
		}
		else {
			cout << n << " is NOT perfect.\n";
		}
	}
}