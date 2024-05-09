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
	set<string> s;
	for (int i = 0; i < n; i++) {
		string a, b;
		cin >> a >> b;
		if (a == "ChongChong"|| s.find(a) != s.end()) {
			s.insert(a);
			s.insert(b);
		}
		else if (b == "ChongChong" || s.find(b) != s.end()) {
			s.insert(a);
			s.insert(b);
		}
	}
	cout << s.size();
}