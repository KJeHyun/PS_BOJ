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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int cnt[100001] = {};
    for (int& i : v) cin >> i;
    int l = 0, r = 0, ans = 0;
    while (r < n) {
        if (cnt[v[r]] != k) {
            cnt[v[r]]++;
            r++;
        }
        else {
            cnt[v[l]]--;
            l++;
        }
        ans = max(ans, r - l);
    }
    cout << ans;
}