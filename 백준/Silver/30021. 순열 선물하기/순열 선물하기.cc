#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
		int N;
	cin >> N;
	if (N == 2) cout << "NO";
	else if (N == 1) cout << "YES\n" << 1;
	else cout << "YES\n"<< "1 3 2";
		for (int i = 0; i < N - 3; i++) {
			cout << ' ' << i+4;
		}
}

