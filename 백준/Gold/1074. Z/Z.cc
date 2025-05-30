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

int N, r, c, cnt;

void z(int sz, int row, int col) {
    if (sz == 1) {
        if (row == r && col == c) cout << cnt;
        exit(0);
    }
    ll quad = (ll)sz * (ll)sz / 4LL;
    if (r < row + sz / 2) {
        if (c < col + sz / 2)
            z(sz / 2, row, col);
        else {
            cnt += quad;
            z(sz / 2, row, col + sz / 2);
        }
    }
    else {
        if (c < col + sz / 2) {
            cnt += 2 * quad;
            z(sz / 2, row + sz / 2, col);
        }
        else {
            cnt += 3 * quad;
            z(sz / 2, row + sz / 2, col + sz / 2);
        }
    }
}

int main() {
    fast_io;
    cin >> N >> r >> c;
    z(1 << N, 0, 0);
}