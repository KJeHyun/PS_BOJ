#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(NULL); ios_base::sync_with_stdio(false);
    int N, K;
    cin >> N >> K;
    vector<long long> A(N);
        for(int i = 0; i < N; i++){
            cin >> A[i];
        }
        sort(A.begin(), A.end());
        cout << A[K-1];
}