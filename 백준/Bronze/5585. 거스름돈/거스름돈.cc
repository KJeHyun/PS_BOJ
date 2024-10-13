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
    int n, ans = 0;
    cin >> n;
    n = 1000 - n;
    ans += n / 500;
    n %= 500;
    ans += n / 100;
    n %= 100;
    ans += n / 50;
    n %= 50;
    ans += n / 10;
    n %= 10;
    ans += n / 5;
    n %= 5;
    ans += n;
    cout << ans;
}