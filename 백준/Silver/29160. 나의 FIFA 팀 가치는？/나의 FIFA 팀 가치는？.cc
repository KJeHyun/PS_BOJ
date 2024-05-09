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
	int n, k;
	cin >> n >> k;
	vector<priority_queue<int>> vpq(11);
	for (int i = 0; i < n; i++) {
		pii a;
		cin >> a.xx >> a.yy;
		vpq[a.xx-1].push(a.yy);
	}
	for (int i = 0; i < 11; i++) {
		vpq[i].push(0);
		for (int j = 0; j < k; j++) {
			int tmp = vpq[i].top();
			tmp--;
			vpq[i].pop();
			vpq[i].push(tmp);
		}
	}
	int res = 0;
	for (int i = 0; i < 11; i++) {
		res += max(0, vpq[i].top());
	}
	cout << res;
}