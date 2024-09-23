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

string fb(const int& i) {
    if (i % 15 == 0) return "FizzBuzz";
    if (i % 3 == 0) return "Fizz";
    if (i % 5 == 0) return "Buzz";
    return to_string(i);
}

int main() {
    fast_io;
    string a, b, c;
    cin >> a >> b >> c;
    if (isdigit(a[0])) cout << fb(stoi(a) + 3);
    else if (isdigit(b[0])) cout << fb(stoi(b) + 2);
    else cout << fb(stoi(c) + 1);
}