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
    while (1) {
        int idx_dt = -1, idx_br = -1, m, j;
        string s, temp1 = "", temp2 = "";
        cin >> s;
        if (cin.eof()) break;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '.') {
                idx_dt = i;
            }
            if (s[i] == '(') {
                idx_br = i;
            }
            if (isdigit(s[i])) temp1 += s[i];
            if (isdigit(s[i]) && idx_br == -1) temp2 += s[i];
        }
        string temp(s.length() - 3 - idx_dt, '0');
        for (int i = 0; i < s.length() - idx_br - 2; i++) {
            temp[i] = '9';
        }
        m = stoi(temp);
        j = stoi(temp1) - stoi(temp2);
        int GCD = gcd(m, j);
        m /= GCD;
        j /= GCD;
        cout << s << " = " << j << " / " << m << "\n";
    }
}