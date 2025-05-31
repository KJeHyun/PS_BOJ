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

int tomato[1000][1000];
int N, M;
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };
queue<pii> q;

bool is_ripe() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (tomato[i][j] == 0)
                return false;
        }
    }
    return true;
}

void visit(int r, int c) {
    tomato[r][c] = 1;
    for (int i = 0; i < 4; i++) {
        int nx = r + dx[i];
        int ny = c + dy[i];
        if (nx >= 0 && ny >= 0 && nx < N && ny < M && tomato[nx][ny] == 0) {
            q.push({ nx,ny });
            tomato[nx][ny] = 1;
        }
    }
}

int bfs() {
    int t = 0;
    while(!q.empty()){
        int sz = q.size();
        for (int i = 0; i < sz; i++) {
            pii here = q.front();
            q.pop();
            visit(here.xx, here.yy);
        }
        t++;
    }
    if (!is_ripe()) return -1;
    return t - 1;
}

int main() {
    fast_io;
    cin >> M >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> tomato[i][j];
            if (tomato[i][j] == 1)
                q.push({ i,j });
        }
    }
    cout << bfs();
}