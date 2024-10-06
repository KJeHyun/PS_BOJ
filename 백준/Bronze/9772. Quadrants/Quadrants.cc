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
    while (9772) {
        float x, y;
        cin >> x >> y;
        if (x == 0 || y == 0) cout << "AXIS\n";
        else if (x > 0) {
            if (y > 0) cout << "Q1\n";
            else cout << "Q4\n";
        }
        else {
            if (y > 0) cout << "Q2\n";
            else cout << "Q3\n";
        }
        if (!x && !y) break;
    }
}