#include <iostream>
#include <algorithm>//sort
#include <cmath> //pow
using namespace std;
int main(int argc, const char * argv[]) {

    int a,b,c;
    cin >> a >> b >> c;
    
    while (a != 0 && b != 0 && c != 0) {
        int array[3] = {a, b, c};
        sort(array, array+3);
        if(pow(array[0], 2) + pow(array[1], 2) == pow(array[2], 2)) cout << "right\n";
        else cout << "wrong\n";
        cin >> a >> b >> c;
    }
    
    return 0;
}
