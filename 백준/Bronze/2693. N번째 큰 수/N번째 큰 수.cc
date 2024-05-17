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
	cin >> n;
	while(n--){
        int a[10];
        for(int i=0;i<10;i++){
            cin >> a[i];
        }
        sort(a,a+10,greater<int>());
        cout << a[2] << "\n";
    }
}
