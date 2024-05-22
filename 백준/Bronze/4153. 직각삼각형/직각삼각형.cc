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
    int a, b, c;
    while (cin >> a >> b >> c) {
        if (!a && !b && !c) break;
        int A = a * a, B = b * b, C = c * c;
        if (A + B == C || B + C == A || C + A == B)
            cout << "right\n";
        else cout << "wrong\n";
    }
}