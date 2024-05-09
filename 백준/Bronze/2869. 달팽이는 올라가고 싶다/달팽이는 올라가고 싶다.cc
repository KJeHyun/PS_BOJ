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
		int a, b, c, i;
	cin >> a >> b >> c;
	i = (c - a) / (a - b);
	if ((c-a)%(a-b)== 0) {
		cout << i+1;
		return 0;
	}
	cout << i + 2;
}