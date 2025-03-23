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
    vector<int> v;
    int Q, c;
    cin >> Q;
    while (Q--) {
        int c;
        cin >> c;
        switch (c)
        {
        case 1: {
            int x;
            cin >> x;
            if (x == 1)
                sort(v.begin(), v.end());
            else
                sort(v.begin(), v.end(), greater<int>());
            break;
        }
        case 2: {
            int x, t;
            cin >> x >> t;
            v.resize(v.size() + 1);
            for (int i = v.size() - 2; i >= x; i--) {
                v[i + 1] = v[i];
            }
            v[x] = t;
            break;
        }
        default:
            break;
        }
    }
    cout << v.size() << "\n";
    for (auto& n : v) cout << n << " ";
}