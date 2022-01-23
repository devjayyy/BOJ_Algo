#include <iostream>
using namespace std;
int factorial(int num) {
    if(num == 0) {
        return 1;
    }
    return num * factorial(num-1);
}
int main(int argc, const char * argv[]) {
    int num{0};
    cin >> num;
    cout << factorial(num) <<'\n';
    return 0;
}
