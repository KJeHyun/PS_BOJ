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

int prime[] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113 };
bool isAe(int x) {
	int l = 0, r = 29;
	while (l <= r) {
		int sum = prime[l] + prime[r];
		if (sum == x) return true;
		else if (sum < x) l++;
		else r--;
	}
	return false;
}

int main() {
	fast_io;
	int n;
	cin >> n;
	while (n--) {
		int a;
		cin >> a;
		if (isAe(a)) cout << "Yes\n";
		else cout << "No\n";
	}
}