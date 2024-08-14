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

ll a, b, c, k;

ll pow(ll b) {
    if (b == 0) return 1;
    if (b == 1) return a % c;

    k = pow(b / 2) % c;
    if (b % 2 == 0) return k * k % c;
    return k * k % c * a % c;
}

int main() {
    fast_io;
    cin >> a >> b >> c;
    cout << pow(b);
}