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
    int m;
    cin >> m;
    int val, BIT = 0;
    string ord;
    while (m--) {
        cin >> ord;
        if (ord == "add") {
            cin >> val;
            BIT |= (1 << val);
        }
        else if (ord == "remove") {
            cin >> val;
            BIT &= ~(1 << val);
        }
        else if (ord == "check") {
            cin >> val;
            if (BIT & (1 << val))
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (ord == "toggle") {
            cin >> val;
            BIT ^= (1 << val);
        }
        else if (ord == "all") {
            BIT = (1 << 21) - 1;
        }
        else if (ord == "empty") {
            BIT = 0;
        }
    }
}