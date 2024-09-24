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
    ll n;
    cin >> n;
    if (n >= SHRT_MIN && n <= SHRT_MAX) cout << "short";
    else if(n >= INT_MIN && n <= INT_MAX) cout << "int";
    else if (n >= LLONG_MIN && n <= LLONG_MAX) cout << "long long";
}