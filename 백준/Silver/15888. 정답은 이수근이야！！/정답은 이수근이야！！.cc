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

int pow2[] = { 2,4,8,16,32,64 };

bool isPow2(int x) {
	for (int i = 0; i < 6; ++i) {
		if (x == pow2[i]) {
			return true;
		}
	}
	return false;
}

int main() {
	fast_io;
	int a, b, c;
	cin >> a >> b >> c;
	vector<int> sol;
	for (int i = -100; i <= 100; ++i) {
		if (a * i * i + b * i + c == 0) {
			if (sol.empty()) {
				sol.push_back(i);
			}
			else {
				sol.push_back(i);
			}
		}
	}
	if (sol.empty() || sol.size() == 1) {
		cout << "둘다틀렸근\n";
	}
	else {
		if (isPow2(sol[0]) && isPow2(sol[1])) {
			cout << "이수근\n";
		}
		else {
			cout << "정수근\n";
		}
	}
}