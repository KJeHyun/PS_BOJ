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

int cnt[10];

bool can() {
    int c = 0;
    for (int i = 0; i < 10; i++) {
        if (cnt[i]) c++;
    }
    if (c <= 2) return true;
    return false;
}

int main() {
    fast_io;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int max_len = -1, l = 0, r = 0;
    while (l < n) {
        while (r < n) {
            cnt[v[r++]]++;
            if (!can()) {
                r--;
                cnt[v[r]]--;
                break;
            }
        }
        max_len = max(max_len, r - l);
        cnt[v[l++]]--;
    }
    cout << max_len;
}