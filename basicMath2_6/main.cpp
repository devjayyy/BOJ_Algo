//에라토스테네스의 체 다시 사용
#include <iostream>
#include <cmath> //sqrt 사용
using namespace std;

int main() {
    int size{0};
    int num{0};
    cin >> size;

    for (int i = 0; i < size; i++) {//테스트케이스까지 반복
        cin >> num; //체크할 숫자
        bool *prime = new bool[num+1]; //0~num
        fill_n(prime, num+1, 1); //prime을 true로 초기화
        prime[0] = false;
        prime[1] = false;
        
        
        for (int i = 2; i <= sqrt(num); i++) //num의 제곱근까지 체크
            if(prime[i] == true) //true 이면 체크해서 확인해주기
                for(int j = i*2; j <= num; j += i) //배수를 다 체크
                    prime[j] = false;
        int flag = 0;
        for (int i = num/2; i >= 2; i--){
            for (int j = num/2; j <= num; j++){
                if(prime[i] == true && prime[j] == true) {//소수이면 출력
                    //cout << i << "\n";
                    //cout << j << "\n";
                    if(i + j == num) {
                        flag = 1;
                        cout << i << " " << j << "\n";
                        break;
                    }
                }
            }
            if(flag == 1) break;
        }

        delete[] prime;
    }
    return 0;
}
