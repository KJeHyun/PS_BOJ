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
    int A, B, C, S, V, L, t = 0;
    cin >> A >> B >> C
        >> S >> V
        >> L;
    int exp = (250 - L) * 100;
    while (exp > 0) {
        if (V) {
            for (int i = 0; i < 30; i++) {
                exp -= C;
                t++;
                if (exp <= 0) break;
            }
            V--;
        }
        else if (S) {
            for (int i = 0; i < 30; i++) {
                exp -= B;
                t++;
                if (exp <= 0) break;
            }
            S--;
        }
        else {
            exp -= A;
            t++;
        }
    }
    cout << t;
}