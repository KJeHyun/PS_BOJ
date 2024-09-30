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
    int t;
    cin >> t;
    while (t--) {
        int car, opt;
        cin >> car >> opt;
        while (opt--) {
            int a, b;
            cin >> a >> b;
            car += a * b;
        }
        cout << car << "\n";
    }
}