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

vector<int> table(100'001);

void eratos() {
    for (ll i = 2; i <= 100'000; i++) {
        if (table[i]) continue;
        table[i] = int(i);
        for (ll j = i * i; j <= 100'000; j += i) {
            if (table[j]) continue;
            table[j] = int(i);
        }
    }
}
map<int, int> primeF(int n) {
    map<int, int> r;
    int tmp = n;
    while (tmp > 1) {
        r[table[tmp]]++;
        tmp /= table[tmp];
    }
    return r;
}
int main() {
    fast_io;
    int t;
    cin >> t;
    eratos();
    while (t--) {
        int n;
        cin >> n;
        map<int, int> m = primeF(n);
        for (auto& [key, value] : m) {
            cout << key << " " << value << "\n";
        }
    }
}