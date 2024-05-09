#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    double N;
    double m;
    cin >> N;
    vector<double> v(N);
    for (int i=0; i<N; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0; i<N; i++){
        m += v[i];
    }
    m = m / v[N-1] * 100 / N;
    cout << m;
}