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
	int E, S, M;
	cin >> E >> S >> M;
	int e = 1, s = 1, m = 1, y = 1;
	while (E != e || S != s || M != m) {
		e++;
		s++;
		m++;
		if (e == 16)
			e = 1;
		if (s == 29)
			s = 1;
		if (m == 20)
			m = 1;
		y++;
	}
	cout << y;
}