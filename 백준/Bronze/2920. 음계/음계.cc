#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
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
		string s;
	getline(cin, s);
	if (s == "1 2 3 4 5 6 7 8") cout << "ascending";
	else if (s == "8 7 6 5 4 3 2 1") cout << "descending";
	else cout << "mixed";
}