//"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.
//
//"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.
//
//OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.
#include <iostream>
#include <vector>
#include <string>
#include <numeric>
using namespace std;

int main(int argc, const char * argv[]) {
    int size{0};
    int count{0};
    int sum{0};
    string str{};
    vector<string> quiz{};
    vector<int> check{};
    
    
    cin >> size;
    
    for(int i = 0; i < size; i++) { //한 줄씩 문자열로 넣기
        cin >> str;
        quiz.push_back(str);
    }
    
    count = 1;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < quiz[i].size(); j++) {
            if(quiz[i][j] == 'O') {
                check.push_back(count); //누적 수를 배열에 넣기
                count++;
                if(quiz[i][j + 1] == 'X' || quiz[i][j + 1] == '\0') {
                    sum += accumulate(check.begin(), check.end(), 0); // numeric 라이브러리의 accumulate 사용
                    check.clear();//누적되지 않는 순간 비우기
                    count = 1;
                    //cout << "sum : " << sum << '\n';
                }
            }
        }
        cout << sum << '\n';
        sum = 0;
    }
    
    return 0;
}
