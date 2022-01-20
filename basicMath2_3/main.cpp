#include <iostream>

using namespace std;

int factorization(int num) {
    int result{0};
    for(int i = 2; i <= num; i++) {
        if(num % i == 0)
            return i;
    }
    return result;
}
int main(int argc, const char * argv[]) {
    int num{0};
    
    cin >> num;
    
    while(num > 1) {
        int fac = factorization(num);
        cout << fac << '\n';
        num = num / fac;
    }
    return 0;
}
