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

int sbn[1001];
bool vst[1001];

int main() {
    fast_io;
    int n, ans = -1, mcnt = -1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> sbn[i];
    }
    for (int i = 1; i <= n; i++) {
        memset(vst, 0, sizeof(vst));
        int nxt = sbn[i], cnt = 1;
        vst[i] = true;
        while (!vst[nxt]) {
            vst[nxt] = true;
            nxt = sbn[nxt];
            cnt++;
        }
        if (mcnt < cnt) {
            mcnt = cnt;
            ans = i;
        }
    }
    cout << ans;
}