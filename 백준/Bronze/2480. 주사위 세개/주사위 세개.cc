#include <iostream>
using namespace std;

int main(){
    int a,b,c,p;
    cin >> a >> b >> c;
    if((a==b)&&(b==c)){
        p=10000+1000*a;
    }
    else if((a==b)||(a==c)){
        p=1000+100*a;
    }
    else if(b==c){
        p=1000+100*b;
    }
    else{
        int d=max(a,max(b,c));
        p=d*100;
    }
    cout << p;
}