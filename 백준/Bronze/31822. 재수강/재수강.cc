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
    string s;
    cin >> s >> n;
    int ans = 0;
    s = s.substr(0, 5);
    while (n--) {
        string x;
        cin >> x;
        x = x.substr(0, 5);
        if (s == x) ans++;
    }
    cout << ans;
}