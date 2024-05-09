#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int k; cin >> k;
    stack<int> st;
    while(k--){
        int a; cin >> a;
        if(a==0&&!st.empty()) st.pop();
        else if(a!=0) st.push(a);
    }
    int res = 0;
    while(!st.empty()){
        res += st.top();
        st.pop();
    }
    cout << res;
}