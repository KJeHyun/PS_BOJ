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
    int n, e, cnt = 1;
    cin >> n >> e;
    vector<int> v(n);
    for (int& i : v) cin >> i;
    sort(v.begin(), v.end());
    int prev = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] - prev >= e) {
            cnt++;
        }
        prev = v[i];
    }
    cout << cnt;
}