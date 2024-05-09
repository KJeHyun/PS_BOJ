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
	int x1,x2,x3,y1,y2,y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	if (x1 == x2) cout << x3 << ' ';
	else if (x2 == x3) cout << x1 << ' ';
	else cout << x2 << ' ';

	if (y1 == y2) cout << y3 << ' ';
	else if (y2 == y3) cout << y1 << ' ';
	else cout << y2 << ' ';

}