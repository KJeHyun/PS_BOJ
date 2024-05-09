#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef tuple<int, int, int> tiii;
typedef tuple<ll, ll, ll> tlll;
#define xx first
#define yy second

int main() {
    fast_io
        int M, N, cnt = 0;
    bool isPow = false;
    cin >> M >> N;
    vector<int> p(101);
    for (; M <= N; M++) {
        for (int i = 1; i < 101; i++) {
            if (M == (i * i)) {
                isPow = true;
                p[cnt] = M;
                cnt++;
            }
        }
    }
    if (!isPow) { cout << -1; }
    else {
        int j = 0, sum = 0;
        while (p[j] != 0) {
            sum += p[j];
            j++;
        }
        cout << sum << "\n" << p[0];
    }
}