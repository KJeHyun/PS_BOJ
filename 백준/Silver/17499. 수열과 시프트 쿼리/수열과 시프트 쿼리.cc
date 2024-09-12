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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int& i : a) cin >> i;
    int idx = 0;
    while (q--) {
        int ord;
        cin >> ord;
        switch (ord) {
        case 1: {
            int i, x;
            cin >> i >> x;
            a[(i + idx - 1) % n] += x;
            break;
        }
        case 2: {
            int s;
            cin >> s;
            idx -= s;
            idx = (idx + n) % n;
            break;
        }
        case 3: {
            int s;
            cin >> s;
            idx += s;
            idx = (idx + n) % n;
            break;
        }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[(i + idx) % n] << " ";
    }
}