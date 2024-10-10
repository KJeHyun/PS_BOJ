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
    int t, cnt = 0;
    cin >> t;
    while (t--) {
        cnt++;
        int rice[5];
        for (int& i : rice) cin >> i;
        sort(rice, rice + 5);
        cout << "Case #" << cnt << ": " << rice[4] << "\n";
    }
}