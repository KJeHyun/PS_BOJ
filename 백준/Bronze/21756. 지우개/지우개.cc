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
    vector<int> v1, v2;
    for (int i = 1; i <= n; ++i) {
        v1.push_back(i);
    }
    while (v1.size() != 1) {
        v2 = {};
        for (int i = 1; i < v1.size(); i += 2) {
            v2.push_back(v1[i]);
        }
        v1 = v2;
    }
    cout << v1[0];
}