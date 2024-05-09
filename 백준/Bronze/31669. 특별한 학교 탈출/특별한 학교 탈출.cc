#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef tuple<int, int, int> tiii;
typedef tuple<ll, ll, ll> tlll;
#define xx first
#define yy second

int main() {
    fast_io
        int N, M, cnt = 0;
    string s;
    cin >> N >> M;
    vector<bool> isTeacher(M, false);
    for (int i = 0; i < N; i++) {
        cin >> s;
        for (int j = 0; j < M; j++) {
            if (s[j] == 'O') {
                isTeacher[j] = true;
            }
        }
    }
    for (int i = 0; i < M; i++) {
        if (isTeacher[i] == false) {
            cout << i+1;
            break;
        }
        else cnt++;
    }
    if (cnt == M) {
        cout << "ESCAPE FAILED";
    }
}