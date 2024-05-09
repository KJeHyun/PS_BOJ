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
        int m;
    cin >> m;
    float M = m;
    cout.precision(1);
    cout << fixed;
    if (m <= 30) {
        cout << M / 2.0;
    }
    else {
        cout << 15 + (M - 30) * 3 / 2;
    }
 }
