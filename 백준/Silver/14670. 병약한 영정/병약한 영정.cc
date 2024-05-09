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
	int n; cin >> n;
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		int mE, mN;
		cin >> mE >> mN;
		m[mE] = mN;
	}
	int r; cin >> r;
	for (int i = 0; i < r; i++) {
		int l; cin >> l;
		bool isLive = true;
		vector<int> v;
		while (l--) {
			int s; cin >> s;
			if (m.find(s)!=m.end()) v.push_back(m[s]);
			else {
				isLive = false;
			}
		}
		if (isLive) for (auto& a : v) cout << a << " ";
		else cout << "YOU DIED";
		cout << "\n";
	}
}