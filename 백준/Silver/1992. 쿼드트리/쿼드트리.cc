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

vector<vector<int>> video;

void qTree(int x, int y, int sz) {
    if (sz == 1) {
        cout << video[x][y]; return;
    }
    int tmp = video[x][y];
    bool isE = true;
    for (int i = x; i < x + sz; i++) {
        for (int j = y; j < y + sz; j++) {
            if (video[i][j] != tmp) {
                isE = false;
                cout << '(';
                qTree(x, y, sz / 2);
                qTree(x, y + sz / 2, sz / 2);
                qTree(x + sz / 2, y, sz / 2);
                qTree(x + sz / 2, y + sz / 2, sz / 2);
                cout << ')';
                return;
            }
        }
    }
    if (isE) cout << tmp;
}

int main() {
    fast_io;
    int n;
    cin >> n;
    video.resize(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char x;
            cin >> x;
            video[i][j] = x - '0';
        }
    }
    qTree(0, 0, n);
}