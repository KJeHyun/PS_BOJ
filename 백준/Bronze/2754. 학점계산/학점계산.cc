#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    double res = 0.0;
    res+= 'E' - s[0];
    if(s[1]=='+') res+=0.3;
    else if(s[1]=='-') res-=0.3;
    else if(s[0]=='F') res=0.0;
    cout.precision(1);
    cout << fixed << res;
}