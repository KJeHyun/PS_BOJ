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
    ll k, a, b, c, d;
    cin >> k >> a >> b >> c >> d;
    ll l = a * k + b, r = c * k + d;
    if (l == r) cout << "Yes " << l;
    else cout << "No";
}