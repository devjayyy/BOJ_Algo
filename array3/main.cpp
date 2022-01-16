//vector 말고 그냥 배열을 동적할당 해보기 new , delete
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    int mul{0};
    int A{0};
    int B{0};
    int C{0};
    int count{0};
    string str{};

    cin >> A;
    cin >> B;
    cin >> C;
    
    mul = A * B * C;
    str = to_string(mul); //곱한 결과를 문자열로 저장
    int* num = new int[str.length()]();
    
    for(int i = 0; i < str.length(); i++) { //문자열을 하나하나 읽으며 배열에 int로 저장
        num[i] = static_cast<int>(str[i]) - 48;
    }
//    for(int i = 0; i < str.length(); i++) { //제대로 들어갔나 확인
//        cout << num[i] << '\t';
//    }
//    cout << '\n';
    for(int i = 0; i < 10; i++) {
        count = 0;
        for(int j = 0; j < str.length(); j++) {
            if(i == num[j]) //같으면 count 증가
                count++;
        }
        cout << count << '\n';
    }
    delete[] num;
    return 0;
}
