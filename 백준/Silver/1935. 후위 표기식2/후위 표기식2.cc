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

double Postfix(const string& e, const vector<double>& v) {
    stack<double> s;
    for (char c : e) {
        if (c >= 'A' && c <= 'Z') {
            s.push(v[c - 'A']);
        }
        else {
            double b = s.top(); s.pop();
            double a = s.top(); s.pop();
            switch (c) {
            case '+':
                s.push(a + b);
                break;
            case '-':
                s.push(a - b);
                break;
            case '*':
                s.push(a * b);
                break;
            case '/':
                s.push(a / b);
                break;
            }
        }
    }
    return s.top();
}


int main() {
	fast_io;
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<double> v(n);
    for (double& d : v) cin >> d;
    cout << fixed << setprecision(2) << Postfix(s, v);
}