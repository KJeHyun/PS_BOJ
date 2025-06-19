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

int price(int x, int y, int z) {
    if (x == y && y == z) return 10000 + 1000 * x;
    if (x == y) return 1000 + 100 * x;
    if (x == z) return 1000 + 100 * x;
    if (y == z) return 1000 + 100 * y;
    return 100 * max({ x,y,z });
}

int main() {
    fast_io;
    int t;
    cin >> t;
    int M = 0;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        M = max(M, price(a, b, c));
    }
    cout << M;
}