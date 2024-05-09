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
		int l, i = 1, s = 1;
	cin >> l;
	for (;;) {
	if (l >= s-6*i+1 && l <= s) {
			cout << i;
			break;
		}
		s += 6*i;
		i++;
	}
}