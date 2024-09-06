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
    int q;
    cin >> q;
    ll l = -1'000'000'000'000'000'001LL, r = -l;
    bool isT = false;
    int idx = -1;
    for (int i = 0; i < q; i++) {
        ll num;
        char op;
        cin >> num >> op;
        if (op == 'v') {
            r = min(r, num);
        }
        else if (op == '^') {
            l = max(l, num);
        }
        if (l + 1 >= r) {
            cout << "Paradox!\n" << i + 1;
            return 0;
        }
        if (!isT && l + 1 == r - 1) {
            idx = i + 1;
            isT = true;
        }
    }
    if (idx != -1) {
        cout << "I got it!\n" << idx;
    }
    else cout << "Hmm...";
}