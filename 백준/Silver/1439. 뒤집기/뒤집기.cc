#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
    fast_io
        ll count = 0;
        string s;
    cin >> s;
    ll len = s.length();
    for (int i = 0; i < len; i++) {
        if (i == len - 1) {
            break;
        }
        else if (s[i] != s[i + 1]) {
            count++;
        }
        else { continue; }
    }
    if (count % 2 !=0) { cout << count/2 +1; }
    else cout << count / 2;
}