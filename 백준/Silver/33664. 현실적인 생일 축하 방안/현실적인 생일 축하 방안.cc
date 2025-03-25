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
	map<string, ll> present;
	ll B, N, M;
	cin >> B >> N >> M;
	for (int i = 0; i < N; i++) {
		string s;
		ll a;
		cin >> s >> a;
		present[s] = a;
	}
	while (M--) {
		string x;
		cin >> x;
		B -= present[x];
	}
	if (B < 0) cout << "un";
	cout << "acceptable\n";
}