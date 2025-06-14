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
    char x;
    int num, sum = 0;
    for (int i = 0; i < 13; i++) {
        cin >> x;
        if (x == '*') {
            if (i % 2) num = 3;
            else num = 1;
            continue;
        }
        if (i % 2) sum += ((x - '0') * 3);
        else sum += (x - '0');
    }
    for (int i = 0; i < 10; i++) {
        if ((sum + num * i) % 10 == 0) {
            cout << i;
            break;
        }
    }
}