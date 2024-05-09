#include <iostream>
#include <string>
using namespace std;
int main(){
    int N;cin>>N;
    for(int i=0;i<N;i++){
        string s;
        cin >> s;
        cout << s[0] << s[s.length()-1] << endl;
    }
}