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
    string a, b;
    char op;
    cin >> a >> op >> b;
    int a_power = a.length() - 1;
    int b_power = b.length() - 1;

    if (op == '*') {
        cout << "1";
        for (int i = 0; i < a_power + b_power; i++) {
            cout << "0";
        }
    }
    else if (op == '+') {
        if (a_power == b_power) {
            cout << "2";
            for (int i = 0; i < a_power; i++) {
                cout << "0";
            }
        }
        else if (a_power > b_power) {
            cout << "1";
            for (int i = 0; i < a_power - b_power - 1; i++) {
                cout << "0";
            }
            cout << "1";
            for (int i = 0; i < b_power; i++) {
                cout << "0";
            }
        }
        else {
            cout << "1";
            for (int i = 0; i < b_power - a_power - 1; i++) {
                cout << "0";
            }
            cout << "1";
            for (int i = 0; i < a_power; i++) {
                cout << "0";
            }
        }
    }
}