#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int N, M, i, j;
    cin >> N >> M;
    vector<int> a(N);
    for(int p=0; p<N; p++){
        a[p] = p+1;
    }
    for(int p=0; p<M; p++){
        cin >> i >> j;
        reverse(a.begin()+i-1,a.begin()+j);
    }
    for(int p=0; p<N; p++){
        cout << a[p] << ' ';
    }
}