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

bool cmp(const pii& a, const pii& b) {
	if (a.xx != b.xx) return a.xx> b.xx;
	return a.yy < b.yy;
}
int main() {
	fast_io;
	int n;
	cin >> n;
	vector<int> a(n);
	vector<pii> b(1000001);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		int tmp = a[i];
		if (a[i] < 0) tmp = a[i] + 1000001;
		b[tmp].xx++;
		b[tmp].yy = a[i];
	}
	sort(b.begin(), b.end(), cmp);
	sort(a.begin(), a.end());
	int mean = round((double)sum / n);
	int mod = b[0].yy;
	if (b[1].xx == b[0].xx) mod = b[1].yy;
	int mid = a[(n - 1) / 2];
	int range = a[n - 1] - a[0];
	cout << mean << "\n" << mid << "\n" << mod << "\n" << range;
}