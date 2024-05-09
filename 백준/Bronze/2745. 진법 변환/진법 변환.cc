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
		int b, res = 0;int tmp;;;;
	string n;
	cin >> n >> b;
	int len = n.length();
	for (int i = 0; i < len; i++) {
		tmp = 1;
		if (n[len - i - 1] >= 'A' && n[len - i - 1] <= 'Z') {
			tmp = (n[len - i - 1] - 'A' + 10);
		}
		else { tmp = n[len - i - 1] - '0'; }
		for (int j = 0; j < i; j++) {
			tmp *= b;
		}
		res += tmp;
	}
	cout << res;
}