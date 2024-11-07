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
    int n, cnt = 0;
    cin >> n;
    for (int i = 1; i < 1001; i++) {
        for (int j = i + 1; j < 1001; j++) {
            if (j * j - i * i == n) {
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
}