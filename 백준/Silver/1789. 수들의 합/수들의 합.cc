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
    ll s, n = 0;
    cin >> s;
    for (ll i = 1; i < 100000; ++i) {
        if (i * (i + 1) / 2 > s)
            break;
        n++;
    }
    cout << n;
}