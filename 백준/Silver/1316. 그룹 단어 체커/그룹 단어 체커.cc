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
	int cnt = 0, N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		bool used[27] = {}, count = true;
		for (int j = 0; j < s.length(); j++) {
			if (used[s[j] - 'a']) {
				count = false;
				break;
			}
			if (s.length() > j+1 && s[j] != s[j+1]) {
				used[s[j] - 'a'] = true;
			}
		}
		if (count) cnt++;
	}
	cout << cnt;
}