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

int countZero(int n, int m) {
    int cnt = n == 0 ? 1 : 0;
    for (int i = n; i <= m; i++) {
        int tmp = i;
        while(tmp){
            if (!(tmp % 10)) cnt++;
            tmp /= 10;
        }
    }
    return cnt;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << countZero(n, m) << "\n";
    }
}