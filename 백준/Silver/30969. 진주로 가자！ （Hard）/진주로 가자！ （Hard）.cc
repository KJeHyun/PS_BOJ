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

int n, cnt, j;
int v[1002];

int main() {
    fast_io;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string x;
        ll y;
        cin >> x >> y;
        if (x == "jinju") j = y;
        v[min(y, 1001LL)]++;
    }
    for (int i = j + 1; i < 1002; i++) {
        cnt += v[i];
    }
    cout << j << "\n" << cnt;
}