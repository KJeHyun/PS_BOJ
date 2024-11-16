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
    int g, p, t, a, b;
    cin >> g >> p >> t;
    a = g * p;
    b = g + p * t;
    if (a > b) cout << 2;
    else if (a < b) cout << 1;
    else cout << 0;
}