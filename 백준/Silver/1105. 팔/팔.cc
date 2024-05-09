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
		string L, R; int numL = 0, numR = 0, count = 0;
	cin >> L >> R;
	ll a = stoll(L), b = stoll(R);
	while (a != 0) {
		a /= 10;
		numL++; //L의 자릿수
	}
	while (b != 0) {
		b /= 10;
		numR++; //R의 자릿수
	}
	if (numL != numR) cout << 0;
	else {
		for (int i = 0; i < numL; i++) {
			if (L[i] != R[i]) break;
			else {
				if (L[i] == '8')
					count++;
			}
		}
		cout << count;
	}
}