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

float sc(string s) {
	float a = 0;
	if (s[0] == 'A') {
		a = 4;
	}
	else if (s[0] == 'B') {
		a = 3;
	}
	else if (s[0] == 'C') {
		a = 2;
	}
	else if (s[0] == 'D') {
		a = 1;
	}
	if (s[1] == '+') { a += 0.5; }
	return a;
}
int main() {
	fast_io
		float mean = 0; float cnt = 0;
	for (int i = 0; i < 20; i++) {
		string sub, gr;
		float n;
		cin >> sub >> n >> gr;
		if (gr[0] != 'P'){
			mean += (n*sc(gr));
			cnt += n;
		}
	}
	cout.precision(7);
	if (mean == 0) {
		cout << "0.000000";
	}
	else {
		cout << (mean / cnt);
	}
}