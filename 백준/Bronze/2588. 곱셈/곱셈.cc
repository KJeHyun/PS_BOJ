#include <iostream>

int main(){
    int a, b, c, d, e;
    std::cin >> a >> b;
    c = b/100; //c는 백의 자릿수
    d = (b/10)-(c*10); //d는 십의 자릿수
    e = b%10; //e는 일의 자릿수
    std::cout << a*e << "\n" << a*d << "\n" << a*c << "\n" << 100*a*c + 10*a*d + a*e; 
}