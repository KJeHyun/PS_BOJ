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

vector<ll> d;

void makeDec(ll n, ll first) {
    for (ll i = 0; i < first; i++) {
        d.push_back(n * 10 + i);
        makeDec(n * 10 + i, i);
    }
}

int main() {
    fast_io;
    ll n;
    cin >> n;
    for (ll i = 0; i <= 9; i++) {
        d.push_back(i);
        makeDec(i, i);
    }
    sort(d.begin(), d.end());
    if (n < d.size()) cout << d[n];
    else cout << -1;
}