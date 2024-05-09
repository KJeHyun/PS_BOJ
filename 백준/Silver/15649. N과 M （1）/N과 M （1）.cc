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
int used[9], ans[9];

void back_tracking(int cnt) {
    if (cnt == M) {
        for (int i = 0; i < M; i++) {
            cout << ans[i] << ' ';
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= N; i++) {
        if (!used[i]) {
            used[i] = true;
            ans[cnt] = i;
            back_tracking(cnt + 1);
            used[i] = false;
        }
    }
}
int main() {
    fast_io
        cin >> N >> M;
    back_tracking(0);
}