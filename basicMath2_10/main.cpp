#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int r{0};
    cin >> r;
    
    cout << fixed;
    cout.precision(6);
    cout << 3.14159265358979 * r * r << '\n';
    
    cout << fixed;
    cout.precision(6);
    cout << 2.0 * r * r << '\n';
    return 0;
}
