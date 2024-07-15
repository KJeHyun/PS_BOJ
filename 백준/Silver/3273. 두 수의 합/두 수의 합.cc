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
	int n, x;
	cin >> n;
	vector<int> a(n);
	for (int& i : a) cin >> i;
	sort(a.begin(), a.end());
	cin >> x;
	int l = 0, r = n - 1, cnt = 0;
	while (l < r) {
		int sum = a[l] + a[r];
		if (sum == x) {
			cnt++;
			l++;
			r--;
		}
		else if (sum < x)
			l++;
		else
			r--;
	}
	cout << cnt;
}