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

int one(int n) {
	int cur = 1;
	int len = 1;
	while (cur % n != 0) {
		cur = cur * 10 + 1;
		len++;
		cur %= n;
	}
	return len;
}

int main() {
	fast_io;
	int x;
	while (cin >> x) {
		cout << one(x) << "\n";
	}
}