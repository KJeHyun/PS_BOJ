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
    ll a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    cout << max(b - a - 1, 0LL) << "\n";
    for (ll l = a + 1; l < b; l++) {
        cout << l << " ";
    }
}