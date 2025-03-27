#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef tuple<int, int, int> tiii;
typedef tuple<ll, ll, ll> tlll;
#define xx first
#define yy second

int c5(int x) {
	int temp = 0;
	for (int i = 5;; i*=5) {
		if (x / i <= 0) break;
		temp += x / i;
	}
	return temp;
}

int main() {
	fast_io;
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		cout << c5(n) << "\n";
	}
}