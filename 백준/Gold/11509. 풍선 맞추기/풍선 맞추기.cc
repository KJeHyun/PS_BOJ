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
	int n;
	cin >> n;
	vector<int> res;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		bool b = false;
		for (int j = 0; j < res.size(); j++) {
			if (a == res[j] - 1) {
				res[j] = a;
				b = true;
				break;
			}
		}
		if (!b) res.push_back(a);
	}
	cout << res.size();
}