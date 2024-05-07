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

map<string, int> m;
bool cmp(const string& a, const string & b) {
	if (m[a] != m[b]) return m[a] > m[b];
	else if (a.length() != b.length()) return a.length() > b.length();
	else return a < b;
}
int main() {
	fast_io;
	int n, k;
	cin >> n >> k;
	vector<string> a;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s.length() < k) continue;
		a.push_back(s);
		m[s]++;
	}
	sort(a.begin(), a.end(), cmp);
	cout << a[0] << "\n";
	for (int i = 1; i < a.size(); i++) {
		if (a[i] == a[i - 1]) continue;
		cout << a[i] << "\n";
	}
}