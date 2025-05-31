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

int tomato[100][100][100];
int N, M, H;
int dx[] = { -1,1,0,0,0,0 };
int dy[] = { 0,0,-1,1,0,0 };
int dz[] = { 0,0,0,0,-1,1 };
queue<tiii> q;

bool is_ripe() {
    for (int k = 0; k < H; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (tomato[k][i][j] == 0)
                    return false;
            }
        }
    }
    return true;
}

void visit(int h, int r, int c) {
    for (int i = 0; i < 6; i++) {
        int nx = r + dx[i];
        int ny = c + dy[i];
        int nz = h + dz[i];
        if (nx >= 0 && ny >= 0 && nx < N && ny < M &&
            nz >= 0 && nz < H && tomato[nz][nx][ny] == 0) {
            q.push({ nz,nx,ny });
            tomato[nz][nx][ny] = 1;
        }
    }
}

int bfs() {
    int t = 0;
    while (!q.empty()) {
        int sz = q.size();
        for (int i = 0; i < sz; i++) {
            auto [z, x, y] = q.front();
            q.pop();
            visit(z, x, y);
        }
        t++;
    }
    if (!is_ripe()) return -1;
    return t - 1;
}

int main() {
    fast_io;
    cin >> M >> N >> H;
    for (int k = 0; k < H; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> tomato[k][i][j];
                if (tomato[k][i][j] == 1)
                    q.push({ k,i,j });
            }
        }
    }
    cout << bfs();
}