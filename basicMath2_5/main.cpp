//에라토스테네스의 체 다시 사용
#include <iostream>
#include <cmath> //sqrt 사용
using namespace std;

int main() {
    int num{0};
    int sum{0};

    cin >> num;
    while(num != 0) {
        bool *prime = new bool[2*num+1]; //0~2*num
        fill_n(prime, 2*num+1, 1); //prime을 true로 초기화
        prime[0] = false;
        prime[1] = false;
        
        sum = 0; // 다시 sum 초기화
        for (int i = 2; i <= sqrt(2*num); i++) //num의 제곱근까지 체크
            if(prime[i] == true) //true 이면 체크해서 확인해주기
                for(int j = i*2; j <= 2*num; j += i) //배수를 다 체크
                    prime[j] = false;

        for (int i = num+1; i <= num*2; i++) {
            if(prime[i] == true){ //소수이면 출력
                //cout << i << "\n";
                sum++;
            }
        }
        cout << sum << '\n';
        cin >> num;
        delete[] prime;
    }
    return 0;
}
