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
    int n, Y = 0, M = 0;
    cin >> n;
    while (n--) {
        int t;
        cin >> t;
        Y += 10 * (t / 30 + 1);
        M += 15 * (t / 60 + 1);
    }
    if (Y < M) cout << 'Y' << ' ' << Y;
    else if (Y > M) cout << 'M' << ' ' << M;
    else cout << "Y M " << Y;
}