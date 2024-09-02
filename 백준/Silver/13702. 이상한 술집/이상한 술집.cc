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

ll n, k;
vector<ll> v;

bool can(ll a) {
    ll m = 0;
    for (ll& i : v) m += i / a;
    return m >= k;
}

int bi_search() {
    ll lo = 0, hi = 2147483648;
    while (lo + 1 < hi) {
        ll mid = (lo + hi) >> 1;
        if (can(mid)) lo = mid;
        else hi = mid;
    }
    return lo;
}

int main() {
    fast_io;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    cout << bi_search();
}