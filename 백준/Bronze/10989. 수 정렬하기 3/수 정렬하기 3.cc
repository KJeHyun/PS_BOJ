#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <deque>
#include <queue>
#include <stack>
#include <list>
#include <set>
#include <map>
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
	int N, count[10001] = {0};
	cin >> N;
	for (int i = 0; i < N; i++) {
		int l; cin >> l;
		count[l]++;
	}
	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < count[i]; j++) {
			cout << i << '\n';
		}
	}
}