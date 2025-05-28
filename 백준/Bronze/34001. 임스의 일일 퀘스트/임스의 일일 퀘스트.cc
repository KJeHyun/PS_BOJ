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

int symbol(int lv, int k, int n, int m) {
    int tmp = 500;
    if (lv < k) return 0;
    if (lv >= n) tmp -= 200;
    if (lv >= m) tmp -= 200;
    return tmp;
}

int main() {
    fast_io;
    int level;
    cin >> level;
    cout << symbol(level, 200, 210, 220) << " " << symbol(level, 210, 220, 225) << " " << symbol(level, 220, 225, 230) << " "
        << symbol(level, 225, 230, 235) << " " << symbol(level, 230, 235, 245) << " " << symbol(level, 235, 245, 250) << "\n"
        << symbol(level, 260, 265, 270) << " " << symbol(level, 265, 270, 275) << " " << symbol(level, 270, 275, 280) << " "
        << symbol(level, 275, 280, 285) << " " << symbol(level, 280, 285, 290) << " " << symbol(level, 285, 290, 295) << " "
        << symbol(level, 290, 295, 300);
}