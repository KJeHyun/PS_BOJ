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
	int a, b, cnt = 0;
	vector<int> v;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		int s;
		cin >> s;
		v.push_back(s);
	}
	while (b > 0) {
		int a = *(upper_bound(v.begin(), v.end(), b)-1);
		cnt += b / a;
		b %= a;
	}
	cout << cnt;
}