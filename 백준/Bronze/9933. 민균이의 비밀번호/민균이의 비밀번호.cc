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
    vector<string> v, s;
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        v.push_back(x);
        reverse(x.begin(), x.end());
        s.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        for (auto& a : v) if (a == s[i]) {
            cout << a.length() << " " << a[a.length() / 2];
            return 0;
        }
    }
}