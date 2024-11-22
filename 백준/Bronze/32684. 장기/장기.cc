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
    int b, c, d, e, f, g;
    float cho = 0, han = 1.5;
    cin >> b >> c >> d >> e >> f >> g;
    cho += b * 13 + c * 7 + d * 5 + e * 3 + f * 3 + g * 2;
    cin >> b >> c >> d >> e >> f >> g;
    han += b * 13 + c * 7 + d * 5 + e * 3 + f * 3 + g * 2;
    if (cho > han) cout << "cocjr0208";
    else cout << "ekwoo";
}