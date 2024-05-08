#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
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
        int res = 1000001;
    int num[5];
    for (int i = 0; i < 5; i++) { cin >> num[i]; }
    vector<int> choose = { 0, 0, 1, 1, 1 };
    do {
        int x = 1;
        for (int i = 0; i < 5; i++) {
            if (choose[i]) { x = lcm(x, num[i]); }
        }
        res = min(res, x);
    } while (next_permutation(choose.begin(), choose.end()));
    cout << res;
}