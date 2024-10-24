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
    int a, b;
    cin >> a >> b;
    if (a >= b and !((a + b) % 2))
        cout << (a + b) / 2 << " " << (a - b) / 2;
    else cout << -1;
}