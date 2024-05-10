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
    int n; cin >> n;
    unordered_set<int> uset;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        uset.insert(a);
    }
    int m;
    cin >> m;
    for(int i=0;i<m;i++){
        int x;
        cin >> x;
        if(uset.find(x)!=uset.end()){
            cout << 1;
        }
        else cout << 0;
        cout << " ";
    }
}