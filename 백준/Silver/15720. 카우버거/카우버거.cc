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
    int b, c, d, price = 0, init = 0;
    cin >> b >> c >> d;
    vector<int> x(b), y(c), z(d);
    for (auto& i : x) { cin >> i; init += i; }
    for (auto& i : y) { cin >> i; init += i; }
    for (auto& i : z) { cin >> i; init += i; }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    sort(z.begin(), z.end());
    while (b && c && d) {
        price += 0.9 * (x.back() + y.back() + z.back());
        x.pop_back(); y.pop_back(); z.pop_back();
        b--; c--; d--;
    }
    while (b) {
        price += x.back();
        x.pop_back();
        b--;
    }
    while (c) {
        price += y.back();
        y.pop_back();
        c--;
    }
    while (d) {
        price += z.back();
        z.pop_back();
        d--;
    }
    cout << init << "\n" << price;
}