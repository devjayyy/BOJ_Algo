//출처 : https://codesyun.tistory.com/54
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;

    int cnt = n;
    for (int k = 0; k < n; k++) {
        cin >> str; //한 줄씩 문장
        for (int i = 0; i < str.length(); i++) {
            if (str[i] != str[i + 1]) { //다음 문자랑 다르면
                for (int j = i + 1; j < str.length(); j++) {
                    if (str[i] == str[j]) { // 그 다음 문자 중에 같은 게 있으면
                        cnt--; //그룹 단어가 아니므로 빼줌
                        goto STOPCNT; //제일 바깥 반복문으로 돌아감
                    }
                }
            }
        }
    STOPCNT:;
    }
    cout << cnt << '\n';
}
