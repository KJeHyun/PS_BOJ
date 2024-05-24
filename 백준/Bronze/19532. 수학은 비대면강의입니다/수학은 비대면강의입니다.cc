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

int main(){
    fast_io;
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    for (int i = -999; i < 1000; ++i) {
        for (int j = -999; j < 1000; ++j) {
            if (a * i + b * j == c && d * i + e * j == f) {
                cout << i << " " << j << "\n";
                return 0;
            }
        }
    }
}