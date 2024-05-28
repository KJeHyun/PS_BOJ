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
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == ',') {
                a = stoi(s.substr(0, i));
                b = stoi(s.substr(i + 1));
                cout << a + b << "\n";
                break;
            }
        }
    }
}