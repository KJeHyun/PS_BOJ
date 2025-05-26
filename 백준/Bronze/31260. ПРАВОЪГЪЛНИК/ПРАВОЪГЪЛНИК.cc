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
    ll x, y, d;
    cin >> x >> y >> d;
    ll a = ((x * 100 + y) - 2 * d) >> 2;
    ll b = a + d;
    cout << b / 100 << " " << b % 100 << "\n";
    cout << a / 100 << " " << a % 100 << "\n";
}