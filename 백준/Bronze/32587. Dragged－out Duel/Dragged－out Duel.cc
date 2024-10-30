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

int w, l;

void rcp(char a, char b) {
    if (a == 'R' && b == 'S') w++;
    if (a == 'S' && b == 'P') w++;
    if (a == 'P' && b == 'R') w++;
    if (a == 'S' && b == 'R') l++;
    if (a == 'P' && b == 'S') l++;
    if (a == 'R' && b == 'P') l++;
}

int main() {
    fast_io;
    int n;
    string x, y;
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++) {
        rcp(x[i], y[i]);
    }
    if (w > l) cout << "victory";
    else cout << "defeat";
}