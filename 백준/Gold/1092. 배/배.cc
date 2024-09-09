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
    int n, m, t = 0, on = 0;
    cin >> n;
    vector<int> crane(n), cTime;
    for (int& i : crane) cin >> i;
    cin >> m;
    vector<int> box(m);
    for (int& i : box) cin >> i;
    sort(crane.begin(), crane.end(), greater());
    sort(box.begin(), box.end(), greater());
    if (crane[0] < box[0]) {
        cout << -1;
        return 0;
    }
    while (on < m) {
        t++;
        int now = 0;
        for (int i = 0; i < m; i++) {
            if (!box[i]) continue;
            if (crane[now] >= box[i]) {
                on++;
                box[i] = 0;
                now++;
            }
            if (now == n) break;
        }
    }
    cout << t;
}