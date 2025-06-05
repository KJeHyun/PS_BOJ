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
    while (true) {
        int k;
        cin >> k;
        if (!k) break;
        vector<int> s(k), c(k, 1);
        for (int i = 0; i < k; i++) {
            cin >> s[i];
        }
        for (int i = 0; i < 6; i++) {
            c[i] = 0;
        }
        do {
            for (int i = 0; i < k; i++) {
                if (!c[i])
                    cout << s[i] << " ";
            }
            cout << "\n";
        } while (next_permutation(c.begin(), c.end()));
        cout << "\n";
    }
}