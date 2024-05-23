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

int main(){
    fast_io;
    int n, m;
    cin >> n >> m;
    vector<int> Node(n);
    for (int i = 0; i < n; ++i) 
        cin >> Node[i];
    int cnt = 0;
    int tmp = 0;
    for (int i = 0; i < n; ++i) {
        cnt++;
        if (Node[tmp] == m) {
            cout << cnt;
            return 0;
        }
        tmp = Node[tmp];
    }
    cout << -1;
}