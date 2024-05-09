#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a[9];
    for (int i = 0; i < 9; i++) {
        cin >> a[i];
    }
    int b[9];
    for(int i = 0 ; i < 9; i++){
        b[i]=a[i];
    }
    sort(a, a+9);
    cout << a[8] << endl;
    for (int i = 0; i < 9; i++) {
        if (b[i] == a[8]) {
            cout << i+1 << endl;
        }
    }
}