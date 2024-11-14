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
    int sum;
    vector<int> h(9);
    for (int& i : h) { cin >> i; }
    sort(h.begin(), h.end());
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            sum = 0;
            for (int k = 0; k < 9; k++) {
                if (k == i || k == j) continue;
                sum += h[k];
            }
            if (sum == 100) {
                for (int k = 0; k < 9; k++) {
                    if (k == i || k == j) continue;
                    cout << h[k] << "\n";
                }
                return 0;
            }
        }
    }
}