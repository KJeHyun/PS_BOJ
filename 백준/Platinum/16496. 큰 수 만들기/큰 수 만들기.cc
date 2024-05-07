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
struct Compare{
    bool operator()(const string& s, const string& t) {
        return s + t > t + s;
    }
};
int main() {
	fast_io;
    int n;
    cin >> n;
    vector<string> lst;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        lst.push_back(s);
    }
    sort(lst.begin(), lst.end(), Compare());
    if (lst[0][0] == '0') {
        cout << 0;
        return 0;
    }
    for (auto& a : lst) cout << a;
}