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

string s = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main() {
	fast_io;
	string ip;
	while (getline(cin, ip)) {
		for (int i = 0; i < ip.length(); i++) {
			for (int j = 1; j < s.length(); j++) {
				if (s[j] == ip[i]) {
					ip[i] = s[j - 1];
					break;
				}
			}
		}
		cout << ip << '\n';
	}
}