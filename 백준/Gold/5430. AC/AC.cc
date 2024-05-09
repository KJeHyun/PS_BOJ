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
	int T;
	cin >> T;
	while (T--) {
		string p;
		cin >> p;
		deque<int> dq;
		bool fwd = true, err = false;
		int n;
		string x , tmp = "";
		cin >> n >> x;
		for (int i = 0; i < x.length(); i++) {
			if (isdigit(x[i])) tmp += x[i];
			else if (tmp != "") {
				dq.push_back(stoi(tmp));
				tmp = "";
			}
		}
		for (int i = 0; i < p.length(); i++) {
			if (p[i] == 'D') {
				if (dq.empty()) {
					cout << "error\n";
					err = true;
					break;
				}
				if (fwd) dq.pop_front();
				else dq.pop_back();
			}
			else fwd = !fwd;
		}
		if (!err) {
			cout << '[';
			while(!dq.empty()) {
				if (fwd) {
					cout << dq.front() << ((dq.size() == 1) ? "" : ",");
					dq.pop_front();
				}
				else {
					cout << dq.back() << ((dq.size() == 1) ? "" : ",");
					dq.pop_back();
				}
			}
			cout << "]\n";
		}
	}
}