#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
#include <math.h>
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
    double a, b, h, ans;
    cin >> a >> b >> h;
    if (a == 0) {
        ans = b * b + h * h;
        ans *= M_PI;
    }
    else if (b == 0) {
        ans = a * a + h * h;
        ans *= M_PI;
    }
    else if (a == b) {
        cout << -1;
        return 0;
    }
    else {
        ans = b * b + b * b * h * h / (b - a) / (b - a) - a * a - a * a * h * h / (b - a) / (b - a);
        ans *= M_PI;
        ans = ans > 0 ? ans : ans * -1;
    }
    cout.precision(7);
    cout << fixed << ans;
}