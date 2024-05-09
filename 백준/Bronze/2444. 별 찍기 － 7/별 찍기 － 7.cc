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
        int n;
    cin >> n;
        for (int i = 1; i <= n; i++) {
    for (int j = 0; j < n - i; j++) {
        cout << " ";
    }
    for (int j = 0; j < 2 * i - 1; j++) {
        cout << "*";
    }
    cout << "\n";
}

for (int i = n - 1; i > 0; i--) {
    for (int j = 0; j < n - i; j++) {
        cout << " ";
    }
    for (int j = 0; j < 2 * i - 1; j++) {
        cout << "*";
    }
    cout << "\n";
}

return 0;
}