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
	string s;
	cin >> s;
	vector<int> v;
	for (int i = 0; i < s.length(); i++) {
		v.push_back(s[i]-'0');
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < s.length(); i++) {
		cout << v[s.length()-1-i];
	}
}