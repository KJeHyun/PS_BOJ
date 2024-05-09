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
        int i[29] = {};
    bool e[31] = { false };
    for (int p=0; p < 28; p++) {
        cin >> i[p];
        e[i[p]] = true;
    }
    for (int p=1; p < 31; p++) {
        if (!e[p]) {
            cout << p << "\n";
        }
    }
}