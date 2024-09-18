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

void printJ(int x) {
    for (int i = 0; i < x; i++) {
        if (i == 0 || i == x - 1)
            cout << string(x, '#') << "\n";
        else cout << "#" << string(x - 2, 'J') << "#\n";
    }
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        printJ(x);
        cout << "\n";
    }
}