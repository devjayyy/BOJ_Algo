#include <iostream>
#include <vector>
using namespace std;

int primeCheck(vector<int> primeNums) {
    int result{0};
    int flag{0}; //소수이면 0을 유지, 아니면 1로 체크해줌
    
    for(int i = 0; i < primeNums.size(); i++) {
        flag = 0;
        for(int j = 2; j < primeNums[i]; j++) {
            if(primeNums[i] % j == 0) {
                flag = 1; //소수가 아님
                break;
            }
        }
//        cout << primeNums[i] << '\n';
//        cout << flag << '\n';
        if(primeNums[i] == 1) flag = 1; //얘는 소수가 아니니까
        if(flag == 0) {
            result++;
        }
    }
    return result;
}

int main(int argc, const char * argv[]) {
    vector<int> primeNums;
    int value{0};
    int size{0};
    
    cin >> size;
    
    for(int i = 0; i < size; i++) {
        cin >> value;
        primeNums.push_back(value);
    }
    
    cout << primeCheck(primeNums) << '\n';
    
    return 0;
}
