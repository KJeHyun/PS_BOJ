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
    int m = -1, sum = 0;
    for (int i = 0; i < 7; i++) {
        int x;
        cin >> x;
        if (x % 2) {
            sum += x;
            if (m == -1) m = x;
            m = min(m, x);
        }
    }
    if (m != -1) cout << sum << "\n";
    cout << m;
}