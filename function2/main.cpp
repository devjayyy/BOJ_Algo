#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
//12ms.. 효율 안 좋음. scope설정 어떻게 할지.
using namespace std;

int d(int& num) {
    int sum{0};
    string eachNum{};
    
    eachNum = to_string(num);
    //cout << eachNum << '\n';//잘 들어갔나 확인
    for(int i = 0; i < eachNum.size(); i++) {
        sum += (eachNum[i]) - '0'; //각 자리의 수의 합을 구함
    }
    cout << num << "+" << sum << "=" << num + sum << '\n';
    return num + sum; //원래 수와 각 자리의 수를 더해서 반환
}

int main(int argc, const char * argv[]) {
    int number{0};
    int nonSelf{0};
    vector<int> nonSelfNum{};
    vector<int>::iterator it;
    
    number = 1;
    while (true) {
        nonSelf = d(number); //함수 호출
        if(number > 9972) //범위 설정이 어려움 : 10000이 넘다가 9970, 9971, 9972 는 각각 9995, 9997, 9999로 10000이 넘지 않음.....
            break;
        else { //생성자가 있는 값들을 저장
            nonSelfNum.push_back(nonSelf);
            cout << "값 : " << nonSelfNum[number-1] << '\n';//배열에 잘 들어갔나 확인
            number++;
        }
    }
    
    for(int i = 1; i <= 10000; i++) { //1부터 원하는 사이즈까지 배열 안에 있나 없나 확인
        it = find(nonSelfNum.begin(), nonSelfNum.end(), i);//반복자 사용
        if (it != nonSelfNum.end()) //self number 아니면 continue
            continue;
        else //self number 일 때 출력
            cout << i << '\n';

    }
    return 0;
}
