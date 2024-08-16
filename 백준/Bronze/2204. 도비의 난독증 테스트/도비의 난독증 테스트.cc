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

bool cmp(string a, string b) {
    string lower_a = a;
    string lower_b = b;
    transform(lower_a.begin(), lower_a.end(), lower_a.begin(), ::tolower);
    transform(lower_b.begin(), lower_b.end(), lower_b.begin(), ::tolower);
    return lower_a < lower_b;
}
int main() {
    fast_io;
    int n;
    while (cin >> n && n) {
        vector<string> v(n);
        for (string& s : v) cin >> s;
        sort(v.begin(), v.end(), cmp);
        cout << v[0] << "\n";
    }
}