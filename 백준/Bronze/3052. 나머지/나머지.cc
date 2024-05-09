#include <iostream>
using namespace std;

int main(){
    int A, B[11], count=0;
    bool C[42] = {false};
    for(int i=0;i<10;i++){
        cin >> A;
        B[i] = A%42;
        C[B[i]] = true;
    }
    for(int i=0; i<42; i++){
        if(C[i]) {count++;}
    }
    cout << count;
}