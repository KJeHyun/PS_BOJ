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
    int n;
    cin >> n;
    map<char,int> m;
    for (int i = 0; i < n; i++) {
        char x;
        cin >> x;
        m[x]++;
    }
    char s;
    cin >> s;
    cout << m[s];
}