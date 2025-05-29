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

int N, B, W;
int paper[128][128];

void cut(int n, int p, int q) {
    int color = paper[p][q];
    for (int i = p; i < p + n; i++) {
        for (int j = q; j < q + n; j++) {
            if (paper[i][j] != color) {
                cut(n / 2, p, q);
                cut(n / 2, p + n / 2, q);
                cut(n / 2, p, q + n / 2);
                cut(n / 2, p + n / 2, q + n / 2);
                return;
            }
        }
    }
    if (color) B++;
    else W++;
}

int main() {
    fast_io;
    memset(paper, -1, sizeof(paper));
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> paper[i][j];
        }
    }
    cut(N, 0, 0);
    cout << W << "\n" << B;
}