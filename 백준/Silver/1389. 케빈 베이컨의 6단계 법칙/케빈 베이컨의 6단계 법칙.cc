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

constexpr int INF = 123456789;
int N, M;
int dist[101][101];

void floyd() {
    for (int m = 1; m <= N; m++) {
        for (int s = 1; s <= N; s++) {
            for (int e = 1; e <= N; e++) {
                if (dist[s][e] > dist[s][m] + dist[m][e])
                    dist[s][e] = dist[s][m] + dist[m][e];
            }
        }
    }
}

int main() {
    fast_io;
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++)
            if (i != j) dist[i][j] = INF;
    }
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        dist[A][B] = 1;
        dist[B][A] = 1;
    }
    floyd();
    int idx = 0, sum = INF;
    for (int i = 1; i <= N; i++) {
        int tsum = 0;
        for (int j = 1; j <= N; j++) {
            tsum += dist[i][j];
        }
        if (tsum < sum) {
            idx = i;
            sum = tsum;
        }
    }
    cout << idx;
}