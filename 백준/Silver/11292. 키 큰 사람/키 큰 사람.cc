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
    while (1) {
        int n;
        cin >> n;
        if (n == 0) break;
        vector<pair<double, string>> v(n);
        double Max = -1;
        for (int i = 0; i < n; ++i) {
            cin >> v[i].yy >> v[i].xx;
            Max = max(Max, v[i].xx);
        }
        for (int i = 0; i < n; ++i) {
            if (v[i].xx == Max)
                cout << v[i].yy << " ";
        }
        cout << "\n";
    }
}