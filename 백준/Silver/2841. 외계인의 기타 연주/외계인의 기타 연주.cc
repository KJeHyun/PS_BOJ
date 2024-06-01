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
    int n, p, cnt = 0;
    cin >> n >> p;
    stack<int> stk[6];
    while (n--) {
        int x, y;
        cin >> x >> y;
        while (!stk[x - 1].empty() && stk[x - 1].top() > y) {
            stk[x - 1].pop();
            cnt++;
        }
        if (stk[x - 1].empty() || stk[x - 1].top() != y) {
            stk[x - 1].push(y);
            cnt++;
        }
    }
    cout << cnt;
}