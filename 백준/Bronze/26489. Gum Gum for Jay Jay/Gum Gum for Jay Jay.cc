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
    string x;
    int cnt = 0;
    while (getline(cin, x)) {
        if (cin.eof()) break;
        if (x == "gum gum for jay jay") cnt++;
    }
    cout << cnt;
}