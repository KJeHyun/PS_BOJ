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
	ll S;
	cin >> S;
	if (S % 4763 != 0) {
		cout << 0;
		return 0;
	}
	S /= 4763;
	set<pii> resultSet;
	for (int ked = 0; ked <= 200; ++ked) {
		for (int msd = 0; msd <= 200; ++msd) {
			if (ked * 508 + msd * 212 == S) {
				resultSet.insert({ ked, msd });
			}
			if (ked * 108 + msd * 305 == S) {
				resultSet.insert({ ked, msd });
			}
			if (ked * 508 + msd * 305 == S) {
				resultSet.insert({ ked, msd });
			}
			if (ked * 108 + msd * 212 == S) {
				resultSet.insert({ ked, msd });
			}
		}
	}
	cout << resultSet.size() << '\n';
	for (auto& result : resultSet) {
		cout << result.xx << ' ' << result.yy << '\n';
	}

	return 0;
}