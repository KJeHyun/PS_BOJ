#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
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
	fast_io
		string s, t;
	cin >> s;
	t.resize(s.length());
	for (int i = 0; i < s.length(); i++) {
		t[i] = s[s.length() - 1 - i];
	}
	if (s == t) cout << 1;
	else cout << 0;
}