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
    int n, m;
    cin >> n >> m;
    bool isG = true;
    for (int i = 0; i < m; i++) {
        int sz, prev = 200'001;
        cin >> sz;
        while (sz--) {
            int x;
            cin >> x;
            if (x > prev) isG = false;
            prev = x;
        }
    }
    if (isG) cout << "Yes\n";
    else cout << "No\n";
}