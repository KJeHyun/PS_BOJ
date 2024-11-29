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
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        int x;
        cin >> x;
        cout << "Case #" << i << ": ";
        if (x > 4500) cout << "Round 1";
        else if (x > 1000) cout << "Round 2";
        else if (x > 25) cout << "Round 3";
        else cout << "World Finals";
        cout << "\n";
    }
}