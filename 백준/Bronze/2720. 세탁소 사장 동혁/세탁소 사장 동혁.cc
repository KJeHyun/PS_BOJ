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
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int C, q = 0, d = 0, n = 0, p = 0;
		cin >> C;
		while (C >= 25) {
			C -= 25;
			q++;
		}
		while (C >= 10) {
			C -= 10;
			d++;
		} 
		while (C >= 5) {
			C -= 5;
			n++;
		}
		while (C > 0) {
			C--;
			p++;
		}
		cout << q << ' ' << d << ' ' << n << ' ' << p << "\n";
	}
}