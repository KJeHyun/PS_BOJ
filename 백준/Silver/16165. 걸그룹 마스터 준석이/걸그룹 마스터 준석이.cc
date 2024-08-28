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
    int n, m;
    cin >> n >> m;
    map<string, vector<string>> mp;
    for (int i = 0; i < n; i++) {
        string x;
        int y;
        cin >> x >> y;
        for (int j = 0; j < y; j++) {
            string z;
            cin >> z;
            mp[x].push_back(z);
        }
        sort(mp[x].begin(), mp[x].end());
    }
    while (m--) {
        int ord;
        string name;
        cin >> name >> ord;
        if (!ord) {
            for (string& s : mp[name]) {
                cout << s << "\n";
            }
        }
        else {
            for (auto& [key, value] : mp) {
                for (string& a : value) {
                    if (a == name) {
                        cout << key << "\n";
                        break;
                    }
                }
            }
        }
    }
}