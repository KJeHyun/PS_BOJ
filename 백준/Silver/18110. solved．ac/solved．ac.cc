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
    int n;
    cin >> n;
    if (!n) {
        cout << 0;
        return 0;
    }
    vector<int> t(n);
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
        sum += t[i];
    }
    sort(t.begin(), t.end());
    int trim = round(n * 0.15);
    for (int i = 0; i < trim; ++i) {
        sum -= t[i] + t[n - i - 1];
    }
    cout << round(sum / (n - 2 * trim));
}