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

int main() {
	fast_io;
    int N;
    cin >> N;
    vector<pii> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i].first;
        A[i].second = i;
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < N; ++i) {
        B[A[i].second] = i;
    }
    for (int i = 0; i < N; ++i) {
        cout << B[i] << ' ';
    }
    cout << '\n';
}