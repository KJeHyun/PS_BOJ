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
	string s;
	cin >> s;
	int z = 0, o = 0;
	for (char& c : s) {
		if (c == '0') z++;
		else o++;
	}
	cout << string(z / 2, '0') << string(o / 2, '1');
}