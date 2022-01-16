//알파벳이 처음 등장하는 위치
//입력 : baekjoon
//출력 : 1 0 -1 -1 2 -1 -1 -1 -1 4 3 -1 -1 7 5 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
//find 쓰자.
#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string S;
    int count{-1};

    cin >> S;
    
    for(int i = 97; i <= 122; i++) { //'a' = 97, 'z' = 122, npos는 쓰레기 값
        if(S.find(static_cast<char>(i)) != string::npos) //static_cast<char>로 int를 char로 형 변환
            cout << S.find(i) << " ";
        else
            cout << count << " ";
            
    }
    return 0;
}
