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
    int n, m;
    cin >> n >> m;
    int baskets[n+1] = {0};
    
    for (int t = 0; t < m; t++) {
        int i, j, k;
        cin >> i >> j >> k;
        for (int p = i; p <= j; p++) {
            baskets[p] = k;
        }
    }
    
    for (int p = 1; p <= n; p++) {
        cout << baskets[p] << ' ';
    }
}
