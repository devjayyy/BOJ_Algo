#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    char character; //유니폼 초기화 하면 안됨..
    //초기화 3가지 방법
    /*
    int num = 1; //C 스타일
    int num(1);
    int num{1}; //유니폼 초기화 -> 암시적 형변환을 허용하지 않음.
     */
    
    cin >> character;
    
    //cout << character <<'\n'; 잘 들어갔나

    cout << static_cast<int>(character) <<'\n'; //C++ 스타일의 형 변환 사용하기
    
    return 0;
}
