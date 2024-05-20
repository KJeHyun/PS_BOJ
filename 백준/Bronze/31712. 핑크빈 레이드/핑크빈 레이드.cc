#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
    fast_io
        int cu, cd, cp, du, dd, dp, h, i = 1, u, d, p;
    cin >> cu >> du >> cd >> dd >> cp >> dp >> h;
    u = cu, d = cd, p = cp;
    h = h - du - dd - dp;
    if (h <= 0) {
        cout << 0;
        return 0;
    }
    while (h > 0) {
        if (cu == i) {
            h -= du;
            cu += u;
        }
        if (cd == i) {
            h -= dd;
            cd += d;
        }
        if (cp == i) {
            h -= dp;
            cp += p;
        }
        i++;
    }
    cout << i-1;
}