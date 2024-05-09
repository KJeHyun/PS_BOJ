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
        string s;
    int cnt = 0;
    bool inWord = true;
    getline(cin,s);
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])&&inWord) {
            cnt++;
            inWord = false;
        }
        else if (s[i] == ' ') {
            inWord = true;
        }
    }
    cout << cnt;
}