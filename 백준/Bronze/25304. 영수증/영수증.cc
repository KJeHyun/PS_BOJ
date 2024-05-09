#include <iostream>
using namespace std;
int main(){
    int X, N, a, b, P=0;
    bool q;
    cin >> X;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> a >> b;
        P += a*b;
    }
    if(P==X){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}