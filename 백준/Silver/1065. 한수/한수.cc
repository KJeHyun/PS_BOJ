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

int han(int k) {
	int cnt = 0;
	for (int i = 1; i <= k; i++) {
		if (i <= 99) {
			cnt++;
			continue;
		}
		string tmp = to_string(i);
		auto d = tmp[0] - tmp[1];
		bool isH = true;
		for (int j = 2; j < tmp.length(); j++) {
			if (tmp[j - 1] - tmp[j] != d) isH = false;
		}
		if (isH) cnt++;
	}
	return cnt;
}


int main() {
	fast_io;
	int n;
	cin >> n;
	cout << han(n);
}
