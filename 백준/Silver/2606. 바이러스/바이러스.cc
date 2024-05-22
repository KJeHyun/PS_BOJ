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

bool inf[100];
vector<int> cpt[100];

void infection(int idx) {
	inf[idx] = true;
	for (int& i : cpt[idx]) {
		if (inf[i]) continue;
		infection(i);
	}
}
int main(){
	fast_io;
	int n, m;
	cin >> n >> m;
	while (m--) {
		int a, b;
		cin >> a >> b;
		cpt[a - 1].push_back(b - 1);
		cpt[b - 1].push_back(a - 1);
	}
	infection(0);
	int cnt = -1;
	for (bool& b : inf) if (b == true) cnt++;
	cout << cnt;
}