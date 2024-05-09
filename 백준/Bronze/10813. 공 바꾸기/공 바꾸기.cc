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
        int N, M, i, j, cup;
    cin >> N >> M;
    vector<int> basket(N+1);
    for (int p = 1; p < N+1; p++) {
        basket[p] = p;
    }
    for (int p = 1; p < M+1; p++) {
        cin >> i >> j;
        cup = basket[i];
        basket[i] = basket[j];
        basket[j] = cup;
    }
    for (int p = 1; p < N+1; p++) {
        cout << basket[p] << ' ';
    }
}