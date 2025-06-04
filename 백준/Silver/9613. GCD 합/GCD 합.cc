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
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll sum = 0;
        cin >> n;
        vector<ll> v(n);
        for (ll& i : v) cin >> i;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                sum += gcd(v[i], v[j]);
            }
        }
        cout << sum << "\n";
    }
}