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

map<char, pii> keyboard;

int main() {
    fast_io;
    keyboard['q'] = { 1,3 }; keyboard['a'] = { 1,2 }; keyboard['z'] = { 1,1 };
    keyboard['w'] = { 2,3 }; keyboard['s'] = { 2,2 }; keyboard['x'] = { 2,1 };
    keyboard['e'] = { 3,3 }; keyboard['d'] = { 3,2 }; keyboard['c'] = { 3,1 };
    keyboard['r'] = { 4,3 }; keyboard['f'] = { 4,2 }; keyboard['v'] = { 4,1 };
    keyboard['t'] = { 5,3 }; keyboard['g'] = { 5,2 }; keyboard['b'] = { 5,1 };
    keyboard['y'] = { 6,3 }; keyboard['h'] = { 6,2 }; keyboard['n'] = { 6,1 };
    keyboard['u'] = { 7,3 }; keyboard['j'] = { 7,2 }; keyboard['m'] = { 7,1 };
    keyboard['i'] = { 8,3 }; keyboard['k'] = { 8,2 };
    keyboard['o'] = { 9,3 }; keyboard['l'] = { 9,2 };
    keyboard['p'] = { 10,3 };
    int t = 0;
    char l, r;
    string s;
    cin >> l >> r >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'q' || s[i] == 'w' || s[i] == 'e' || s[i] == 'r' || s[i] == 't' ||
            s[i] == 'a' || s[i] == 's' || s[i] == 'd' || s[i] == 'f' || s[i] == 'g' ||
            s[i] == 'z' || s[i] == 'x' || s[i] == 'c' || s[i] == 'v') {
            t += abs(keyboard[s[i]].xx - keyboard[l].xx);
            t += abs(keyboard[s[i]].yy - keyboard[l].yy);
            l = s[i];
        }
        if (s[i] == 'y' || s[i] == 'u' || s[i] == 'i' || s[i] == 'o' || s[i] == 'p' ||
            s[i] == 'h' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l' ||
            s[i] == 'b' || s[i] == 'n' || s[i] == 'm') {
            t += abs(keyboard[s[i]].xx - keyboard[r].xx);
            t += abs(keyboard[s[i]].yy - keyboard[r].yy);
            r = s[i];
        }
    }
    t += s.length();
    cout << t << "\n";
}