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

constexpr auto MAX = 15;
int N, cnt;
int col[MAX];

bool can(int row) {
	for (int i = 0; i < row; i++)
		if (col[i] == col[row] || abs(col[row] - col[i]) == row - i)
			return false;
	return true;
}

void nqueen(int n) {
	if (n == N) cnt++;
	else {
		for (int i = 0; i < N; i++) {
			col[n] = i;
			if (can(n)) nqueen(n + 1);
		}
	}
}

int main() {
	fast_io;
	cin >> N;
	nqueen(0);
	cout << cnt;
}