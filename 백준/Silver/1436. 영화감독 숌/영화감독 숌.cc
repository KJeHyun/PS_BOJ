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
    int a;
    cin >> a;
    ll i = 665; int cnt = 0;
    while (i++) {
        if (cnt == a) break;
        int j = 2;
        string s = to_string(i);
        while (666) {
            if (j != s.length() && s[j] == '6' && s[j - 1] == '6' && s[j - 2] == '6') {
                cnt++;
                break;
            }
            else {
                if (j == s.length()) break;
                else j++;
            }
        }
    }
    cout << i - 1;
}