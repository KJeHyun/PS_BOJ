#include <iostream>
using namespace std;

int main() {
    int N, M, count = 0;
    cin >> N; // 0과 99 사이의 정수 입력
    M = N; // N 값을 M에 복사
    
    // 루프를 시작하기 전에 최소 한 번의 연산을 수행해야 하므로,
    // 루프 진입 조건을 항상 참으로 만들고, 루프 내에서 종료 조건을 체크합니다.
    while (true) {
        int leftDigit = M / 10; // M의 왼쪽 자릿수
        int rightDigit = M % 10; // M의 오른쪽 자릿수
        int sum = leftDigit + rightDigit; // 두 자릿수의 합
        M = (rightDigit * 10) + (sum % 10); // 새로운 M 값 생성
        count++; // 연산 횟수 증가
        
        if (M == N) {
            break; // M이 N과 같아지면 루프 종료
        }
    }
    
    cout << count; // 연산 횟수 출력
    return 0;
}