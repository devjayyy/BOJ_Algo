#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> primeCheck(int min, int max) {
    vector<int> result;
    vector<int> primeNums;
    int flag{0}; //소수이면 0을 유지, 아니면 1로 체크해줌
    int sum{0};
    int minPrime{0};
    
    for(int i = min; i <= max; i++) {
        flag = 0;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }
        if(i == 1) flag = 1;
        if(flag == 0) {
            primeNums.push_back(i);
            sum += i;
        }
    }
    if(primeNums.size() > 0) {
        minPrime = *min_element(primeNums.begin(), primeNums.end());
        result.push_back(sum);
        result.push_back(minPrime);
    }
    else result.push_back(-1);
    return result;
}

int main(int argc, const char * argv[]) {
    int max{0};
    int min{0};
    
    cin >> min;
    cin >> max;
    
    vector<int> array = primeCheck(min, max);

    if(array[0] != -1) {
        cout << array[0] << '\n';
        cout << array[1] << '\n';
    }
    else cout << array[0] << '\n';


    return 0;
}
