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

int main() {
	fast_io;
	int ans = -1;
	vector<bool> isSelf(20000,true);
	for (int i = 1; i <= 10000; i++) {
		int tmp = i;
		ans = tmp;
		while (tmp) {
			ans += tmp % 10;
			tmp /= 10;
		}
		isSelf[ans] = false;
	}
	for (int i = 1; i <= 10000; i++){
		if (isSelf[i]) cout << i << "\n";
	}
}