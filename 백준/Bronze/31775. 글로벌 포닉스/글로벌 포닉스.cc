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

string gp(string a, string b, string c) {
    char q = a[0], w = b[0], e = c[0];
    if (q == 'k' && w == 'l' && e == 'p') return "GLOBAL";
    else if (q == 'k' && w == 'p' && e == 'l') return "GLOBAL";
    else if (q == 'l' && w == 'k' && e == 'p') return "GLOBAL";
    else if (q == 'l' && w == 'p' && e == 'k') return "GLOBAL";
    else if (q == 'p' && w == 'l' && e == 'k') return "GLOBAL";
    else if (q == 'p' && w == 'k' && e == 'l') return "GLOBAL";
    return "PONIX";
}

int main() {
    fast_io;
    string a, b, c;
    cin >> a >> b >> c;
    cout << gp(a, b, c);
}