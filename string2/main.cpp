#include <iostream>
#include <string>
using namespace std;

int main() {
    int size{0};
    int sum{0};
    string numbers;
    
    cin >> size;
    cin >> numbers;
    //첫 번째 방법
    for(int i = 0; i < size; i++) {
       sum += static_cast<int>(numbers[i]) - 48;
        //cout << sum << '\n';

    }
    //두 번째 방법
    for(int i = 0; i < size; i++) {
        sum += stoi(string(1,numbers[i])); //왜 한글자는 못 읽을까 //stoi와 static_cast<int> 의 적절한 사용법 //한글자를 string 으로 변환해줘야 함.
        //cout << sum << '\n';

    }
    //cout << stoi(numbers) <<'\n';
    cout << sum << '\n';
    return 0;
}
