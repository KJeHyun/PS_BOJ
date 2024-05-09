#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
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
	fast_io
		int a, i=0, s=1, cnt=0; cin >> a;
	for (;;) {
		if (a >= s && a <= s + i) {
			if ((i + 1) % 2 != 0) {
				cout << (i + 1) - (a - s + 1) + 1 << '/' << a - s + 1;;;;;;;;;;;
				break;
			}
			else
			{
				cout << a - s + 1 << '/' << (i + 1) - (a - s + 1) + 1;;;;;;;;;;;
				break;
			}
		}
		i++;
		s += i;
	}
}