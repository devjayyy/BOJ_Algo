//출처 : https://codesyun.tistory.com/50
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int num = 1;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ')//공백 수 세기
            num++;
    }

    if (str[0] == ' ') //처음이 공백이면 단어 수에서 제외
        num--;
    if (str[str.length() - 1] == ' ')//마지막이 공백이면 단어 수에서 제외
        num--;
    
    printf("%d", num);
}
