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

int width(char c) {
    int n = c - '0';
    switch (n)
    {
    case 0:
        return 4;
        break;
    case 1:
        return 2;
        break;
    default:
        return 3;
        break;
    }
}
int main() {
    fast_io;
    string n;
    while (cin >> n) {
        if (n == "0") break;
        int w = 1 + n.length();
        for (int i = 0; i < n.length(); ++i) {
            w += width(n[i]);
        }
        cout << w << "\n";
    }
}