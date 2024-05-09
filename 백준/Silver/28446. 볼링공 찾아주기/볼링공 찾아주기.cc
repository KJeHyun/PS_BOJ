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
	int m;
	cin >> m;
	map<int, int> ball;
	for (int i = 0; i < m; i++) {
		int n;
		cin >> n;
		if (n == 1) {
			int x, w;
			cin >> x >> w;
			ball[w] = x;
		}
		else if (n == 2) {
			int z;
			cin >> z;
			cout << ball[z] << "\n";
		}
	}
}