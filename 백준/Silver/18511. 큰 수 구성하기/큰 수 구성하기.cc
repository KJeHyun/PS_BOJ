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

int n, k, d, M, v[3];

void makeNum(int N, int num) {
    if (N > 0 && num <= n) 
        M = max(M, num);

    if (N == d) return;

    for (int i = 0; i < k; i++) {
        makeNum(N + 1, num * 10 + v[i]);
    }
}

int main() {
    fast_io;
    cin >> n >> k;
    d = log10(n) + 1;
    for (int i = 0; i < k; i++)
        cin >> v[i];
    makeNum(0, 0);
    cout << M;
}