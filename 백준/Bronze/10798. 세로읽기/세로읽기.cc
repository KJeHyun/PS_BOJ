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

string s[5];
int main() {
	fast_io
	for (int i = 0; i < 5; i++) {
		cin >> s[i];
		for (int j = s[i].length(); j < 15; j++) {
			s[i] = s[i] + ' ';
		}
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if(s[j][i]!=' ') cout << s[j][i];
		}
	}
}