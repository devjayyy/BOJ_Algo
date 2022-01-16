//9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
//
//예를 들어, 서로 다른 9개의 자연수
//
//3, 29, 38, 12, 57, 74, 40, 85, 61
//
//이 주어지면, 이들 중 최댓값은 85이고, 이 값은 8번째 수이다.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    vector <int> numbers{};
    int element{0};
    int maxNum{0};
    int maxIndex{0};
    
    for(int i = 0; i < 9; i++) { //값 입력
        cin >> element;
        numbers.push_back(element);
    }
    
//    for(int i = 0; i < numbers.size(); i++) { //반복문으로 max찾기
//        if(maxNum < numbers[i]){
//            maxNum = numbers[i];
//            maxIndex = i + 1;
//        }
//    }
//    cout << maxNum << '\n';
//    cout << maxIndex << '\n';
    
    maxNum = *max_element(numbers.begin(), numbers.end());//algorithm 라이브러리의 max이용
    vector<int>::iterator iter = find(numbers.begin(), numbers.end(), maxNum);// 반복자 정의
    maxIndex = distance(numbers.begin(), iter); //첫 인덱스부터 위에서 찾은 반복자 사이의 거리를 이용하여 maxNum 의 index 찾기
    cout << maxNum << '\n';
    cout << maxIndex + 1 << '\n'; //index + 1
    
    return 0;
}
