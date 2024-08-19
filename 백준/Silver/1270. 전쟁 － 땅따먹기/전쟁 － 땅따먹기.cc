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
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        vector<ll> s(t);
        for (ll& a : s) cin >> a;
        ll major = 0;
        int count = 0;
        for (int j = 0; j < t; j++) {
            if (!count) major = s[j];
            if (s[j] == major) count++;
            else count--;
        }
        ll m = 0;
        for (int k = 0; k < t; k++) {
            if (s[k] == major) m++;
        }
        if (m > t / 2) cout << major << "\n";
        else cout << "SYJKGW\n";
    }
}