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
		int a, b;
		cin >> a >> b;
		if (a > b && a % b == 0) {
			cout << "multiple\n";
		}
		else if (a < b && b % a == 0) {
			cout << "factor\n";
		}
		else if (a == b) {
			break;
		}
		else {
			cout << "neither\n";
		}
	}

}