//에라토스테네스의 체
#include <iostream>
#include <cmath> //sqrt 사용
using namespace std;

int main() {
    int min,max;
    bool *prime; //배열
    cin >> min;
    cin >> max;
    prime = new bool[max+1]; //0~max
    fill_n(prime, max+1, 1); //prime을 true로 초기화
    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i <= sqrt(max); i++) //max의 제곱근까지 체크
        if(prime[i] == true) //true 이면 체크해서 확인해주기
            for(int j = i*2; j <= max; j += i) //배수를 다 체크
                prime[j] = false;

    for (int i = min; i <= max; i++)
        if(prime[i] == true) //소수이면 출력
            cout << i << "\n";
   return 0;
}
