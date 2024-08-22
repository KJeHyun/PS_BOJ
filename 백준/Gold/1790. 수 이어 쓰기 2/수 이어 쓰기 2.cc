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
    int n, k;
    cin >> n >> k;
    int len = 0;
    for (int i = 1; i <= n; i++) {
        len += to_string(i).length();
        if (len >= k) {
            cout << to_string(i)[to_string(i).length() - (len - k) - 1];
            return 0;
        }
    }
    cout << -1;
}