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
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < s.length() / 2; i++) {
        a += s[i];
    }
    for (int i = s.length() / 2; i < s.length(); i++) {
        b += s[i];
    }
    if (a == b) cout << "LUCKY\n";
    else cout << "READY\n";
}