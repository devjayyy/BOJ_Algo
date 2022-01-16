#include <iostream>
using namespace std;
bool hansoo(int a){
    if(a < 100)
        return true;
    int a1, a2, a3;
    a3 = a / 100; //백의 자리수
    a2 = a % 100 / 10; //십의 자리수
        a1 = a % 10; //일의 자리수

    if(a3-a2 == a2-a1) //등차 수열 조건
        return true;
    return false;
}
int main(void){
    int N, count = 0;
    cin>>N;
    for(int i =1; i <= N; i++){
        if(hansoo(i))
            count++;
    }
    cout<<count;
}
