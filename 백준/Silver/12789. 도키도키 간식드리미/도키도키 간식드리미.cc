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
	int n;
	cin >> n;
	stack<int> a;
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		int k; cin >> k;
		if (k == cnt) {
			cnt++;
			while (!a.empty() && a.top() == cnt) {
				a.pop();
				cnt++;
			}
			continue;
		}
		if (a.empty() || a.top() > k) {
			a.push(k);
			continue;
		}
		cout << "Sad";
		return 0;
	}
	cout << "Nice";
}