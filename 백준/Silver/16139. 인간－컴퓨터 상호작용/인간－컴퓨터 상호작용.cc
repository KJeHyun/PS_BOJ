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
	string S;
	int Q;
	cin >> S >> Q;
	vector<vector<int>> count(S.length() + 1, vector<int>(26));
	for (int i = 1; i < S.length() + 1; i++) {
		count[i] = count[i - 1];
		count[i][S[i - 1] - 'a']++;
	}
	while(Q--){
		char c;
		int l, r;
		cin >> c >> l >> r;
		cout << count[r + 1][c - 'a'] - count[l][c - 'a'] << "\n";
	}
}