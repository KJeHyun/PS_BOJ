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

void recursion(int count, int n) {
    cout << string(count * 4, '_') << "\"재귀함수가 뭔가요?\"\n";
    if (count == n) {
        cout << string(count * 4, '_') << "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
        cout << string(count * 4, '_') << "라고 답변하였지.\n";
        return;
    }
    cout << string(count * 4, '_') << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
    cout << string(count * 4, '_') << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
    cout << string(count * 4, '_') << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";
    recursion(count + 1, n);
    cout << string(count * 4, '_') << "라고 답변하였지.\n";
}

int main() {
    fast_io;
    int n;
    cin >> n;
    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
    recursion(0, n);
}