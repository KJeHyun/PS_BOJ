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
    int s, k, h;
    cin >> s >> k >> h;
    if (s + k + h >= 100) cout << "OK";
    else {
        int apbak = min({ s,k,h });
        if (apbak == s)
            cout << "Soongsil";
        else if (apbak == k)
            cout << "Korea";
        else if (apbak == h)
            cout << "Hanyang";
    }
}