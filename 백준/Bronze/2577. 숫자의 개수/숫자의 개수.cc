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
	int a, b, c;
	int cnt[10] = { 0 };
	cin >> a >> b >> c;
	int mul = a * b * c;
	while (mul != 0) {
		cnt[mul%10]++;
		mul /= 10;
	}
	for (auto i : cnt) cout << i << "\n";
}