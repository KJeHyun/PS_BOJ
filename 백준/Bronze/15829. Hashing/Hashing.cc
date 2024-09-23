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

const int r = 31, M = 1234567891;
int main() {
    fast_io;
    int n, ans = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        ll temp = 1;
        for (int j = 0; j < i; j++) {
            temp *= r;
            temp %= M;
        }
        ans += (s[i] - 'a' + 1) * temp % M;
        ans %= M;
    }
    cout << ans;
}