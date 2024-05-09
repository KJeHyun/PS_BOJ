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
	int n, b, h, w;
	cin >> n >> b >> h >> w;
	vector<pair<int,int>> v;
	for (int i = 0; i < h; i++) {
		int p;
		cin >> p;
		int tmp = 0;
		for (int j = 0; j < w; j++) {
			int a; cin >> a;
			tmp = max(a, tmp);
		}
		v.push_back({ p*n,tmp });
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < h; i++) {
		if (v[i].yy >= n && v[i].xx <= b) {
			cout << v[i].xx;
			return 0;
		}
	}
	cout << "stay home";
}