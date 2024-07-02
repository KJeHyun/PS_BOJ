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
	int n, l;
	cin >> n >> l;
	vector<int> h(n);
	for (auto& i : h) cin >> i;
	sort(h.begin(), h.end());
	for (int i = 0; i < n; ++i) {
		if (l >= h[i])
			l++;
	}
	cout << l;
}