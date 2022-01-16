//크로아티아 알파벳
#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(int argc, const char * argv[]) {
    array<string, 8> croatia{"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string words;
    size_t found{0}; //찾을 단어의 첫 번째 인덱스를 반환받음
    int count{0};
    
    cin >> words;
    
    for(string& element : croatia) { //크로아티아 알파벳을 순회
        while((found = words.find(element, 0)) != string::npos){ // 해당 알파벳이 계속 나올 때까지 반복해야 'c=c='를 2개로 볼 수 있음
                words.replace(found, element.size(), "0"); //크로아티아 알파벳 자리에 0을 대신 넣음. 그래야 또 안 읽음.

        }
    }
    
    count += words.size();//0이 해당 단어를 체크해주기 때문에 size를 읽으면 최종값을 구할 수 있음
    cout << count << '\n';


    return 0;
}
