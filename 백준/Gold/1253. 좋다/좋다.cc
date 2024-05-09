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
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int res = 0;
	for (int i = 0; i < n; i++) {
		auto left = v.begin();
		auto right = v.end() - 1;
		while (left < right) {
			if (left - v.begin() == i) left++;
			else if (right - v.begin() == i)right--;
			else if (*left + *right == v[i]) {
				res++;
				break;
			}
			else if (*left + *right > v[i]) right--;
			else left++;
		}
	}
	cout << res;
}