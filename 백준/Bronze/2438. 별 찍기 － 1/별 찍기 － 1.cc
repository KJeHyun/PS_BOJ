#include <iostream>
#include <string>
using namespace std;
int main(){
    int T;
    cin >> T;
    string A = "";
    for(int i=1; i<=T; i++){
        A = A + '*';
        cout << A << endl;
    }
}