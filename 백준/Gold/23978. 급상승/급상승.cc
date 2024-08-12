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
vector<ll> x, dx;

ll sum(ll m, ll n) {
    return (m + n) * (m - n + 1) / 2;
}
bool can(ll a) {
    ll t = a * (a + 1) / 2;
    for (ll i = 0; i < n - 1; i++) {
        t += sum(a, max(0LL, a - dx[i] + 1));
    }
    return t >= k;
}
ll bi_search() {
    ll hi = 0, lo = 1'500'000'000;
    while (hi + 1 < lo) {
        ll mid = (lo + hi) >> 1;
        if (can(mid)) lo = mid;
        else hi = mid;
    }
    return lo;
}
int main() {
    fast_io;
    cin >> n >> k;
    for (ll i = 0; i < n; i++) {
        ll a;
        cin >> a;
        x.push_back(a);
        if (i != 0) dx.push_back(a - x[i - 1]);
    }
    cout << bi_search();
}