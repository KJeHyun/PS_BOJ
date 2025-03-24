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
    int n, in[4];
    cin >> n >> in[0] >> in[1] >> in[2] >> in[3];
    string hb;
    bool deli = true;
    cin >> hb;
    char prev = hb[0];
    for (int i = 1; i < hb.length(); i++) {
        if (prev == hb[i]) deli = false;
        prev = hb[i];
        in[hb[i] - 'a']--;
    }
    for (int i = 0; i < 4; i++)
        if (in[i] < 0) deli = false;
    if (hb.front() != 'a' || hb.back() != 'a') deli = false;
    cout << (deli ? "Yes\n" : "No\n");
}