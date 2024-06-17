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
    unordered_map<string, string> mp;
    mp["Algorithm"] = "204";
    mp["DataAnalysis"] = "207";
    mp["ArtificialIntelligence"] = "302";
    mp["CyberSecurity"] = "B101";
    mp["Network"] = "303";
    mp["Startup"] = "501";
    mp["TestStrategy"] = "105";
    while (n--) {
        string x;
        cin >> x;
        cout << mp[x] << "\n";
    }
}