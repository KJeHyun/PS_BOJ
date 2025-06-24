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

constexpr int MAX = 600;
int cnt, n, m;
char campus[MAX][MAX];
bool vst[MAX][MAX];
const pii d[] = { {-1,0},{1,0},{0,-1},{0,1} };

void dfs(pii here) {
    if (campus[here.xx][here.yy] == 'P') cnt++;
    vst[here.xx][here.yy] = true;
    for (int i = 0; i < 4; i++) {
        int nx = here.xx + d[i].xx;
        int ny = here.yy + d[i].yy;
        if (nx >= 0 && ny >= 0 && nx < n && ny < m
            && !vst[nx][ny] && campus[nx][ny] != 'X')
            dfs({ nx,ny });
    }
}

int main() {
    fast_io;
    pii start;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> campus[i][j];
            if (campus[i][j] == 'I')
                start = { i,j };
        }
    }
    dfs(start);
    if (!cnt) cout << "TT";
    else cout << cnt;
}