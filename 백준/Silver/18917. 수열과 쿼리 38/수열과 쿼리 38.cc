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

int main(){
	fast_io;
	int m, x, q;
	cin >> m;
	ll ex = 0, sum = 0;
	while (m--) {
		cin >> q;
		switch (q) {
		case 1:
			cin >> x;
			sum += x;
			ex ^= x;
			break;
		case 2:
			cin >> x;
			sum -= x;
			ex ^= x;
			break;
		case 3:
			cout << sum << "\n";
			break;
		case 4:
			cout << ex << "\n";
			break;
		default:
			break;
		}
	}
}