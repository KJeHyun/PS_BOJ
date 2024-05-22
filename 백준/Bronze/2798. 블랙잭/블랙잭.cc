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
    int n, m;
    cin >> n >> m;
    vector<int> bJ(n);
    for (auto& i : bJ) cin >> i;
    int res = 600001;
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                int temp = bJ[i] + bJ[j] + bJ[k];
                if (temp <= m && abs(m - temp) < abs(m - res)) {
                    res = temp;
                }
            }
        }
    }
    cout << res;
    return 0;
}