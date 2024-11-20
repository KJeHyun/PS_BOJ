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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a == 8 || a == 9) && b == c && (d == 8 || d == 9)) cout << "ignore";
    else cout << "answer";
}