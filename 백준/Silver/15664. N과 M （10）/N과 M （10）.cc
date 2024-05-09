#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef tuple<int, int, int> tiii;
typedef tuple<ll, ll, ll> tlll;
#define xx first
#define yy second

int N, M;
int used[10], ans[10];
vector<int> a;
void back_traking(int cnt, int start) {
    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            cout << ans[i] << ' ';
        }
        cout << "\n";
        return;
    }
    int last = 0;
    for (int i = start; i < N; i++) {
        if (!used[i] && last != a[i]) {
            used[i] = true;
            ans[cnt] = a[i];
            back_traking(cnt + 1, i + 1);
            used[i] = false;
            last = a[i];
        }
    }
}
int main() {
    fast_io
        cin >> N >> M;
    a.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    back_traking(0, 0);
}