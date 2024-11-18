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
    int x, y, a, b, c, d, q, r;
    cin >> x >> y;
    a = 100 - x;
    b = 100 - y;
    c = 100 - a - b;
    d = a * b;
    q = d / 100;
    r = d % 100;
    cout << a << " " << b << " " << c << " " << d << " " << q << " " << r << "\n" << c + q << " " << r;
}