#include "iostream"

using namespace std;

int main(){
    int t;
    cin >> t;
    if(t>=90 && t<=100) cout << 'A';
    else if(t>=80 && t<=89) cout << 'B';
    else if(t>=70 && t<=79) cout << 'C';
    else if(t>=60 && t<=69) cout << 'D';
    else cout << 'F';
}