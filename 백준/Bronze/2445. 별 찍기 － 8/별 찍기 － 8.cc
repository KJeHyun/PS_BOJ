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
	int n;
	cin >> n;
	string s(n, ' ');
	for (int i = 0; i < n; ++i) {
		s[i] = '*';
		string tmp = s;
		reverse(tmp.begin(), tmp.end());
		cout << s + tmp << "\n";
	}
	for (int i = 0; i < n - 1; ++i) {
		s[n - 1 - i] = ' ';
		string tmp = s;
		reverse(tmp.begin(), tmp.end());
		cout << s + tmp << "\n";
	}
}