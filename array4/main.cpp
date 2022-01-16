//두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다.
//
//수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.

//array 라이브러리 사용해보기
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    array <int, 10> numbers{0};
    array <int, 10> remainders{0};
    int value{-1};
    int count{0};
    
    for (int i = 0; i < numbers.size(); i++) { //numbers.size() vs size(numbers)
        cin >> numbers[i];
    }
    
//    for (int& element : numbers) {
//        cout << element << '\t';
//    }
//    cout << '\n';
    for (int i = 0; i < numbers.size(); i++) { //나머지 값 배열
        remainders[i] = numbers[i] % 42;
    }
//
//    for (int& element : remainders) {
//        cout << element << '\t';
//    }
//    cout << '\n';
    
    sort(remainders.begin(), remainders.end()); //나머지 값 정렬
    value = remainders[0]; //첫번째 값
    count++;
    for(int i = 1; i < remainders.size(); i++) {
        if(remainders[i] != value) {//순차대로 읽다가 달라지면 체크해줌
            value = remainders[i];
            count++;
        }
            
    }
    
    cout << count << '\n';
    return 0;
}
