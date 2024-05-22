#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])) s[i]-=('A'-'a');
        else s[i]+=('A'-'a');
    }
    cout << s;
}