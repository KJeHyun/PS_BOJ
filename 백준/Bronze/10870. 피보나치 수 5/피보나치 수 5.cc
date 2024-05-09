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

int f(int num) {
	if (num <= 1) return num;
	return f(num - 1) + f(num - 2);
}
int main() {
	fast_io;
	int n;
	cin >> n;
	cout << f(n);
}