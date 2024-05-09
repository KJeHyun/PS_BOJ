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
        int n = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        switch (s[i]) {
        case 'A': case'B': case'C': {
            n += 3;
            break;
        }
        case 'D': case'E': case 'F': {
            n += 4;
            break;
        }
        case 'G': case 'H': case 'I':{
            n += 5;
            break;
        }
        case 'J': case 'K': case 'L': {
            n += 6;
            break;
        }
        case 'M': case 'N': case 'O': {
            n += 7;
            break;
        }
        case 'P': case 'Q': case 'R': case 'S': {
            n += 8;
            break;
        }
        case 'T': case 'U': case 'V': {
            n += 9;
            break;
        }
        case 'W': case 'X': case 'Y': case 'Z': {
            n += 10;
            break;
        }
        }
    }
    cout << n;
}