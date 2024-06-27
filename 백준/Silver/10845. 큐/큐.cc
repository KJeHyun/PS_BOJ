#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef tuple<int, int, int> tiii;
typedef tuple<ll, ll, ll> tlll;
#define xx first
#define yy second

int a[10000];

class MyQueue {
    int left, right;
public:
    MyQueue() {
        left = 0;
        right = 0;
    }
    void push(int x) {
        a[right++] = x;
    }
    int pop() {
        if (left < right)
            return a[left++];
        else return -1;
    }
    int size() {
        return right - left;
    }
    int empty() {
        if (left == right)
            return 1;
        else return 0;
    }
    int front() {
        if (left < right)
            return a[left];
        else return -1;
    }
    int back() {
        if (left < right)
            return a[right - 1];
        else return -1;
    }
};
int main() {
    MyQueue q;
    int n;
    cin >> n;
    while (n--) {
        string x;
        cin >> x;
        if (x == "push") {
            int y;
            cin >> y;
            q.push(y);
        }
        else if (x == "pop") {
            cout << q.pop() << "\n";
        }
        else if (x=="size") {
            cout << q.size() << "\n";
        }
        else if (x == "empty") {
            cout << q.empty() << "\n";
        }
        else if (x == "front") {
            cout << q.front() << "\n";
        }
        else if (x == "back") {
            cout << q.back() << "\n";
        }
    }
}