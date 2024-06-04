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

bool vst[25][25];
int house[25][25];
const int dx[] = { -1,1,0,0 };
const int dy[] = { 0,0,-1,1 };

int bfs(int x, int y) {
    vst[x][y] = true;
    queue<pii> q;
    q.push({ x,y });
    int sz = 0;
    while (!q.empty()) {
        pii now = q.front();
        q.pop();
        sz++;
        for (int i = 0; i < 4; ++i) {
            int nx = now.xx + dx[i];
            int ny = now.yy + dy[i];
            if (nx < 0 || ny < 0 || nx >= 25 || ny >= 25) continue;
            if (house[nx][ny] && !vst[nx][ny]) {
                vst[nx][ny] = true;
                q.push({ nx,ny });
            }
        }
    }
    return sz;
}
int main() {
    fast_io;
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < n; ++j) {
            house[i][j] = s[j] - '0';
        }
        
    }
    vector<int> size;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (house[i][j] && !vst[i][j]) {
                cnt++;
                int sz = bfs(i, j);
                size.push_back(sz);
            }
        }
    }
    cout << cnt << "\n";
    sort(size.begin(), size.end());
    for (auto i : size) cout << i << "\n";
    
}