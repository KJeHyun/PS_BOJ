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
	int N, K; cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> K;
		multiset<ll> ms; 
		multiset<ll>::iterator it; 
		for (int j = 0; j < K; j++) {
			char op; ll num;
			cin >> op >> num;
			if (op == 'I') ms.insert(num);
			else if(!ms.empty()){
				it = ms.end();
				it--;
				if (num == 1)
					ms.erase(it);
				else if (num == -1)
					ms.erase(ms.begin());
			}
		}
		if (!ms.empty()) {
			it = ms.end(); it--;
			cout << *it << ' ' << *ms.begin() << '\n';
		}
		else cout << "EMPTY\n";
	}
}