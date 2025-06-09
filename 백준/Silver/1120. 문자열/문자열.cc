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
    int diff = 51;
    string a, b;
    cin >> a >> b;
    for (int i = 0; i <= b.length() - a.length(); i++) {
        int tmp = 0;
        string s = b.substr(i, a.length());
        for (int j = 0; j < a.length(); j++) {
            if (a[j] != s[j]) tmp++;
        }
        diff = min(diff, tmp);
    }
    cout << diff;
}