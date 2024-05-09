#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
        ll answer = 1;
    int n, m, a, h;
    cin >> n >> m >> a >> h;

    for (int i = 0; i < n - 1; i++) {
        answer = (answer * m) % 1000000007;
    }
    cout << answer << endl;
    return 0;
}