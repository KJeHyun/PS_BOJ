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
    int n,m; cin >> n >> m;
    unordered_set<string> uset;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        uset.insert(s);
    }
    int res = 0;
    for(int i=0;i<m;i++){
        string x;
        cin >> x;
        if(uset.find(x)!=uset.end()) res++;
    }
    cout << res;
}