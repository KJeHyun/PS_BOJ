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

unordered_map<ll, ll> dist;

void bfs(ll here, ll dst) {
    queue<int> q;
    q.push(here);
    dist[here] = 1;
    while (!q.empty()) {
        ll now = q.front();
        q.pop();
        if (now == dst) break;
        if (now * 2 <= dst && dist.find(now * 2) == dist.end()) {
            dist[now * 2] = dist[now] + 1;
            q.push(now * 2);
        }
        if (now * 10 + 1 <= dst && dist.find(now * 10 + 1) == dist.end()) {
            dist[now * 10 + 1] = dist[now] + 1;
            q.push(now * 10 + 1);
        }
    }
}
int main() {
    fast_io;
    ll a, b;
    cin >> a >> b;
    bfs(a, b);
    cout << (dist.find(b) != dist.end() ? dist[b] : -1);
}