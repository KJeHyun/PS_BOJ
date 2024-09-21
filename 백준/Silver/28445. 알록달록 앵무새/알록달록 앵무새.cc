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
    string color[4];
    cin >> color[0] >> color[1] >> color[2] >> color[3];
    set<pair<string, string>> s;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            s.insert({ color[i],color[j] });
        }
    }
    for (auto& [x, y] : s) {
        cout << x << " " << y << "\n";
    }
}