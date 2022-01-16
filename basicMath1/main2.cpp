//출처 : https://aorica.tistory.com/116
//A/(C-B)의 출력값의 소수점 유무에 상관없이 1을 더하면 손익분기점
#include <iostream>

using namespace std;

int main(void){
    int A, B, C;
    int n = 1;
    cin>>A>>B>>C;
    if(B >= C){
        cout << -1;
        return 0;
    }
    
    cout<<A/(C-B) + 1;
}
