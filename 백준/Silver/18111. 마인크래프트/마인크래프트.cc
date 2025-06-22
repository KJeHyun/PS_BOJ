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

int field[501][501];

int main() {
    fast_io;
    int n, m, b;
    cin >> n >> m >> b;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> field[i][j];
    int min_cost = 123456789, height = -1;
    for (int k = 0; k <= 256; k++) {
        int inv = b;
        int cost = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int block = abs(field[i][j] - k);
                if (field[i][j] == k) continue;
                else if (field[i][j] > k) {
                    cost += block * 2;
                    inv += block;
                }
                else {
                    cost += block;
                    inv -= block;
                }
            }
        }
        if (inv >= 0 && cost <= min_cost) {
            min_cost = cost;
            height = k;
        }
    }
    cout << min_cost << " " << height;
}