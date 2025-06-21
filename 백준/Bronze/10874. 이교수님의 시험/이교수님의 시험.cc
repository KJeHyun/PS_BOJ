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
    for (int i = 1; i <= n; i++) {
        int score = 0;
        for (int j = 0; j < 10; j++) {
            int a;
            cin >> a;
            if (a == j % 5 + 1) score++;
        }
        if (score == 10) cout << i << "\n";
    }
}