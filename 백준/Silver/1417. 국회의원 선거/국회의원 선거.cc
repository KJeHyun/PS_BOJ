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
    int n;
    cin >> n;
    int ds;
    cin >> ds;
    priority_queue<int> pq;
    while (--n) {
        int x;
        cin >> x;
        pq.push(x);
    }
    int num = 0;
    while (!pq.empty() && ds <= pq.top()) {
        int tmp = pq.top();
        pq.pop();
        pq.push(--tmp);
        num++;
        ds++;
    }
    cout << num << '\n';
}