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
	getline(cin, s);
	string tmp = "";
	bool isTag = false;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '<') {
			isTag = true;
			reverse(tmp.begin(), tmp.end());
			cout << tmp;
			tmp = "";
		}
		if (s[i] == '>') {
			isTag = false;
			cout << s[i];
			continue;
		}
		if (isTag) {
			cout << s[i];
			continue;
		}
		else {
			if(s[i] != ' ')  tmp += s[i];
			else {
				reverse(tmp.begin(), tmp.end());
				cout << tmp << ' ';
				tmp = "";
			}
		}
	}
	reverse(tmp.begin(), tmp.end());
	cout << tmp;
}