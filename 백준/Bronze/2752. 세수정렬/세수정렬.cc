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

int dp[301][2];
int main() {
	fast_io;
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	for (auto i : a) cout << i << " ";
}
