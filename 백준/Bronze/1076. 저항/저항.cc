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

string num;
void resist(string s) {
    if (s == "black") num.push_back('0');
    if (s == "brown") num.push_back('1');
    if (s == "red") num.push_back('2');
    if (s == "orange") num.push_back('3');
    if (s == "yellow") num.push_back('4');
    if (s == "green") num.push_back('5');
    if (s == "blue") num.push_back('6');
    if (s == "violet") num.push_back('7');
    if (s == "grey") num.push_back('8');
    if (s == "white") num.push_back('9');
}
ll ans(string s) {
    ll n = stoll(num);
    if (s == "black") n *= 1;
    if (s == "brown") n *= 10;
    if (s == "red") n *= 100;
    if (s == "orange") n *= 1000;
    if (s == "yellow") n *= 10000;
    if (s == "green") n *= 100000;
    if (s == "blue") n *= 1000000;
    if (s == "violet") n *= 10000000;
    if (s == "grey") n *= 100000000;
    if (s == "white") n *= 1000000000;
    return n;
}
int main() {
    fast_io;
    string a, b, c;
    cin >> a >> b >> c;
    resist(a);
    resist(b);
    cout << ans(c);
}