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
	int n, k, cnt = 0;
	cin >> n >> k;
	vector<int> res(10000);
	for (int i = 1; i < n + 1; i++) {
		if(n % i == 0){
			res[cnt] = i; 
			cnt++;
		}
	}
	if (cnt >= k) {
		cout << res[k-1];
	}
	else cout << 0;
}