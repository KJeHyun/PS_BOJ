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
    int res = 0;
    for (int i = 0; i < 6; i++) {
        char c;
        cin >> c;
        if (c == 'W') res++;
    }
    if (res == 5 or res == 6) {
        cout << 1;
    }
    else if (res == 3 or res == 4) {
        cout << 2;
    }
    else if (res == 1 or res == 2) {
        cout << 3;
    }
    else cout << -1;
}