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
	fast_io;;
	int n, k, rk = 1;
	cin >> n >> k;
	vector<tiii> v(n);
	tiii A;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		auto& [gold, silver, bronze] = v[num - 1];
		cin >> gold >> silver >> bronze;
		if (num == k) A = v[num - 1];
	}
	for (tiii& a:v) if (A < a) rk++;
	cout << rk;
}