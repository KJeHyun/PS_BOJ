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

int countZ(int n) {
    int t = 0, f = 0;
    for (int i = 1; i <= n; i++) {
        int tmp = i;
        while (1) {
            if (tmp % 2 != 0) break;
            tmp /= 2;
            t++;
        }
        while (1) {
            if (tmp % 5 != 0) break;
            tmp /= 5;
            f++;
        }
    }
    return min(t, f);
}

int main() {
    fast_io;
    int n;
    cin >> n;
    cout << countZ(n);
}