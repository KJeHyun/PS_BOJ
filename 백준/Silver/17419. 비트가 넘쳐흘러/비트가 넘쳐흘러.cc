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
    int n;
    string s;
    cin >> n >> s;
    unsigned long K = bitset<64>(s).to_ulong();
    int cnt = 0;
    while (K != 0) {
        K = K - (K & (~K + 1));
        cnt++;
    }
    cout << cnt;
}