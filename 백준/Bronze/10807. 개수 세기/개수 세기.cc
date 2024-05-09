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
		int N, a, b, c=0, arr[101], v;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		arr[i] = a;
	}
	cin >> v;
	for (int i = 0; i < N; i++) {
		if(arr[i] == v) c++;
	}
	cout << c;
}
