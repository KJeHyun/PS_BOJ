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
	string s(2 * n - 1, '*');
	for (int i = 0; i < n; i++) {
		cout << s << "\n";
		s[i] = ' ';
		s.pop_back();
	}
	s.push_back('*');
	for (int i = 1; i < n; i++) {
		s[n - i - 1] = '*';
		s.push_back('*');
		cout << s << "\n";
	}
}