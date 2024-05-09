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
    fast_io;
    string s;
    cin >> s;
    int res = 0;
    int temp = 0;
    int sign = 1;
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            temp = temp * 10 + (s[i] - '0');
        }
        else {
            res += sign * temp;
            temp = 0;
            if (s[i] == '-') {
                sign = -1;
            }
        }
    }
    res += sign * temp;
    cout << res;
    return 0;
}