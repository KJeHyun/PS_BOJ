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
    int tm = s[1] - s[0];
    bool isUp = true, isAlp = tm > 0;
    for (int i = 2; i < s.length(); i++) {
        if (s[i] > s[i - 1]) {
            if (isUp) {
                if (s[i] - s[i - 1] != tm) {
                    isAlp = false;
                    break;
                }
            }
            isUp = true;
            tm = s[i] - s[i - 1];
        }
        else if (s[i] == s[i - 1]) {
            isAlp = false;
            break;
        }
        else {
            if (!isUp) {
                if (s[i] - s[i - 1] != tm) {
                    isAlp = false;
                    break;
                }
            }
            isUp = false;
            tm = s[i] - s[i - 1];
        }
    }
    if (isAlp && !isUp) cout << "ALPSOO";
    else cout << "NON ALPSOO";
}