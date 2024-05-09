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
char F(int a) {
	if (a >= 10) {
		return a - 10 + 'A';
	}
	else return  a + '0';
}
int main() {
	fast_io
	int N, B, res = 0;;;;;
	cin >> N >> B;
	vector<int> t;
	while (N > 0) {
		t.push_back(N % B);
		N /= B;
	}
	reverse(t.begin(), t.end());
	for (int i : t) {
		cout << F(i);
	}
}