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

int dq[4000001];

class MyDeque {
	int fnt = 2000000;
	int bck = 2000000;
public:
	void push_front(int x) {
		dq[--fnt] = x;
	}
	void push_back(int x) {
		dq[bck++] = x;
	}
	void front() {
		if (fnt != bck) {
			cout << dq[fnt] << "\n";
		}
		else cout << -1 << "\n";
	}
	void back() {
		if (fnt != bck) {
			cout << dq[bck - 1] << "\n";
		}
		else cout << -1 << "\n";
	}
	void size() {
		cout << bck - fnt << "\n";
	}
	void empty() {
		if (fnt == bck) {
			cout << 1 << "\n";
		}
		else cout << 0 << "\n";
	}
	void pop_front() {
		if (fnt != bck) {
			cout << dq[fnt] << "\n";
			fnt++;
		}
		else cout << -1 << "\n";
	}
	void pop_back() {
		if (fnt != bck) {
			cout << dq[bck - 1] << "\n";
			bck--;
		}
		else cout << -1 << "\n";
	}
};

int main() {
	fast_io;
	int n;
	cin >> n;
	MyDeque deque;
	for (int i = 0; i < n; i++) {
		int c; cin >> c;
		switch (c) {
		case 1:
			int a;
			cin >> a;
			deque.push_front(a);
			break;
		case 2:
			int b;
			cin >> b;
			deque.push_back(b);
			break;
		case 3:
			deque.pop_front();
			break;
		case 4:
			deque.pop_back();
			break;
		case 5:
			deque.size();
			break;
		case 6:
			deque.empty();
			break;
		case 7:
			deque.front();
			break;
		case 8:
			deque.back();
			break;
		default:
			break;
		}
	}
}
