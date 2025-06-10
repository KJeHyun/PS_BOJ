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
    vector<int> v(n);
    for (int i = n - 1; i >= 0; i--) {
        cin >> v[i];
    }
    int dec = 0;
    for (int i = 1; i < n; i++) {
        while (v[i] >= v[i - 1]) {
            v[i]--;
            dec++;
        }
    }
    cout << dec;
}