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
    int n, m, cnt = 0;
    cin >> n >> m;
    vector<int> num(m);
    for (int& i : num) cin >> i;
    bool used[10];
    const int MAX_INT = pow(10, n);
    for (int i = 0; i < MAX_INT; i++) {
        memset(used, false, sizeof(used));
        string number = to_string(i);
        bool isOk = true;
        number.insert(0, n - number.length(), '0');
        for (int j = 0; j < number.length(); j++) {
            used[number[j] - '0'] = true;
        }
        for (int& t : num) if (!used[t]) isOk = false;
        if(isOk) cnt++;
    }
    cout << cnt;
}