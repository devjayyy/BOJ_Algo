//브루트 포스 : 조합 가능한 모든 문자열을 하나씩 대입해 보는 방식으로 암호를 해독하는 방법
#include <iostream>
using namespace std;
int split(int num) {
    int copy = num;
    int result{0};
    result += copy;
    while (copy != 0) {
        result += copy % 10;
        copy /= 10;
    }
    return result;
}
int main(int argc, const char * argv[]) {
    int number{0};
    cin >> number;
    
    //split
    int sum{0};
    int i{0};
    for(i = 0; i < number; i++) {
        sum = split(i);
        if(sum == number) break;
    }
    cout << i << '\n';
    return 0;
}

