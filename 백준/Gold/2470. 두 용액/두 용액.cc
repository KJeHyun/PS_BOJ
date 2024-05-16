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
	vector<int> alk(n);
	for (auto& i : alk) cin >> i;
	sort(alk.begin(), alk.end());
	auto L = alk.begin();
	auto R = prev(alk.end());
	int F = *L, S = *R, m = *L + *R;
	while (L + 1 < R) {
		if (*L + *R > 0) R--;
		else if (*L + *R < 0) L++;
		else {
			F = *L;
			S = *R;
			break;
		}
		if (abs(m) > abs(*L + *R)) {
			m = *L + *R;
			F = *L;
			S = *R;
		}
	}
	cout << F << " " << S;
}
