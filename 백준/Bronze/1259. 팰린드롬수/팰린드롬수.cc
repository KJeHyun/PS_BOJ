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
	for (;;) {
		string n;
		cin >> n;
		if (n == "0") return 0;
		bool isF = true;
		for (int i = 0; i < n.length() / 2; i++) {
			if (n[i] != n[n.length() - 1 - i]) isF = false;
		}
		if (isF) cout << "yes\n";
		else cout << "no\n";
	}
}