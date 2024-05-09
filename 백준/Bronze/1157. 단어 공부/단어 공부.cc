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
		string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] <= 'z' && s[i] >= 'a') s[i] += 'A' - 'a';
	}
	int n[26] = {};
	for (int i = 0; i < s.length(); i++) {
		n[s[i] - 'A']++;
	}
	int cnt = 0; char ans;
	for (int i = 0; i < 26; i++) {
		if (n[i] > cnt) {
			cnt = n[i];
			ans = i + 'A';
		}
		else if (n[i] == cnt) {
			ans = '?';
		}
	}
	cout << ans;
}