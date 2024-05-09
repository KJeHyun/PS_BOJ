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
    int sum = 0;
    string s; cin >> s;
    int len = s.length();
    bool isZero = 0;
    vector<int> a(len);
    for (int i = 0; i < len; i++) {
        a[i] = s[i] - '0';
        if (a[i] == 0) {
            isZero = 1;
        }
        sum += a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    if (sum % 3 != 0 || !isZero) {
        cout << -1;
    }
    else {
        for (int i = 0; i < len; i++) {
            cout << a[i];
        }
    }
    return 0;
}