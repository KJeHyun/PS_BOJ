#include <iostream>
using namespace std;
int main(){
    int N, res=1, cnt=3;
    cin >> N;
    for(int i=1;i<N;i++){
        res *= 2;
        cnt += res;
    }
    cout << cnt*cnt;
}