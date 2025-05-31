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
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int s, t;
        cin >> s >> t;
        if (s + t <= x) v.push_back(s);
    }
    sort(v.begin(), v.end(), greater());
    if (!v.empty()) cout << v[0];
    else cout << -1;
}