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
	ll n;
	cin >> n;
	vector<ll> dice(6);
	ll M = -1;
	for (int i = 0; i < 6; i++) {
		cin >> dice[i];
		M = max(M, dice[i]);
	}
	ll s1 = 51LL;
	ll s2 = 101LL;
	ll s3 = 151LL;
	for (int i = 0; i < 6; i++) {
		s1 = min(s1, dice[i]);
		for (int j = i + 1; j < 6; j++){
			if (i + j != 5) s2 = min(s2, dice[i] + dice[j]);
			for (int k = j + 1; k < 6; k++) {
				if (i + j != 5 && j + k != 5 && k + i != 5) {
					s3 = min(s3, dice[i] + dice[j] + dice[k]);
				}
			}
		}
	}
	ll res = 0;
	if (n == 1) {
		std::cout << dice[0] + dice[1] + dice[2] + dice[3] + dice[4] + dice[5] - M;
		return 0;
	}
	res += s3 * 4;
	res += s2 * (8LL * n - 12LL);
	res += s1 * (5LL * n * n - 16LL * n + 12LL);
	std::cout << res;
}