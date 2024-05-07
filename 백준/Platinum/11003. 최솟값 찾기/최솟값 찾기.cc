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

int main() {
	fast_io;
	int n, l;
	cin >> n >> l;
	deque<pii> dq; 
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		while (!dq.empty() && dq.front().yy <= i - l) {
			dq.pop_front();
		}
		while (!dq.empty() && dq.back().xx >= a) {
			dq.pop_back();
		}
		dq.push_back({ a,i });
		cout << dq.front().xx << " ";
	}
}