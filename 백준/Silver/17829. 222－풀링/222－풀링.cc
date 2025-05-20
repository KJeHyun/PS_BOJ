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

int square[1024][1024];

int pooling(int row, int col) {
	int a[] = { square[row][col], square[row + 1][col],
		square[row][col + 1] ,square[row + 1][col + 1] };
	sort(a, a + 4);
	return a[2];
}

void cnn(int N) {
	if (N == 1) return;
	for (int i = 0; i < N / 2; i++) {
		for (int j = 0; j < N / 2; j++) {
			square[i][j] = pooling(i * 2, j * 2);
		}
	}
	cnn(N / 2);
}

int main() {
	fast_io;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> square[i][j];
		}
	}
	cnn(n);
	cout << square[0][0];
}