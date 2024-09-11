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

int n, m;
int ans[9];

void back_tracking(int cnt) {
    if (cnt == m + 1) {
        for (int i = 1; i <= m; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (ans[cnt - 1] <= i) {
            ans[cnt] = i;
            back_tracking(cnt + 1);
        }
    }
}

int main() {
    fast_io;
    cin >> n >> m;
    back_tracking(1);
}