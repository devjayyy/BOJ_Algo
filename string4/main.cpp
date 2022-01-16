//+, insert, append, push_back 의 차이는 뭘까
// + : 문자열 연결, 주로 문자열끼리 이어붙일 때 사용
//insert : 원하는 위치에 원하는 단어를 삽입가능
//append : 문자열 뒤에 문자/문자열 추가
//push_back : 문자 한 개만 뒤에 추가함, 주로 벡터와 같이 씀
#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string S;
    string newS;

    int test_case{0};
    int repeat{0};

    cin >> test_case;
    //append 쓰기
    //1차 시도 안됨. : vector의 사이즈 문제 같음 // 아님 append에 인수 넣을 때 문제 같음
    //그냥 벡터 안에 append 함수가 없던 거임
//    for(int i = 0; i < test_case; i++) {
//        cin >> repeat;
//        cin >> S;
//        for(int j = 0; j < S.size(); j++)
//            newS[i].append(repeat, S[j]);
//
//    }
    
       for(int i = 0; i < test_case; i++) {
            cin >> repeat;
            cin >> S;
           for(int j = 0; j < S.size(); j++) {
               newS.insert(newS.end(), repeat, S[j]); //string 라이브러리에 있는 insert 사용->문자 반복해서 넣어줌
           }
           cout << newS << '\n';
           newS.clear();
        }
    return 0;
}
