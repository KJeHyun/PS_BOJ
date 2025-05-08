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
	fast_io;;
	int H, W;
	cin >> H >> W;
	int cnt;
	char x;
	for (int i = 0; i < H; i++) {
		cnt = -1;
		for (int j = 0; j < W; j++) {
			cin >> x;
			if (x == 'c') cnt = 0;
			cout << cnt << ' ';
			if (cnt >= 0) cnt++;
		}
		cout << '\n';
	}
}