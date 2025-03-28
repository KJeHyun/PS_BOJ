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

int change(int n) {
	if (n == 1 || n == 3)
		return -1;
	int temp = 0;
	temp += n / 5;
	n %= 5;
	if (n % 2) {
		n += 5;
		temp--;
	}
	temp += n / 2;
	return temp;
}

int main() {
	fast_io;
	int n;
	cin >> n;
	cout << change(n);
}