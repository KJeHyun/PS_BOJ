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

int rsp(int x, int y) {
    if (x == 1) {
        if (y == 1) return 0;
        if (y == 2) return -1;
        if (y == 3) return 1;
    }
    if (x == 2) {
        if (y == 1) return 1;
        if (y == 2) return 0;
        if (y == 3) return -1;
    }
    if (x == 3) {
        if (y == 1) return -1;
        if (y == 2) return 1;
        if (y == 3) return 0;
    }
}

int main() {
    fast_io;
    int n;
    cin >> n;
    vector<int> ff(n), pd(n);
    for (int i = 0; i < n; i++) {
        cin >> ff[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> pd[i];
    }
    int cnt = 0, tcnt = 0, t = 0;
    for (int i = 0; i < n; i++) {
        int winner = rsp(ff[i], pd[i]);
        if (winner == 0) {
            winner = -t;
        }
        if (winner == t) {
            tcnt++;
        }
        else {
            t = winner;
            tcnt = 1;
        }
        cnt = max(tcnt, cnt);
    }
    cout << cnt;
}