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
    vector<int> v(n);
    vector<char> res;
    stack<int> stk;
    for (int& i : v) cin >> i;
    int idx = 0;
    for (int i = 1; i <= n; ++i) {
        stk.push(i);
        res.push_back('+');
        while (!stk.empty() && stk.top() == v[idx]) {
            stk.pop();
            idx++;
            res.push_back('-');
        }
    }
    if (idx == n) {
        for (char c : res) cout << c << "\n";
    }
    else cout << "NO\n";
}