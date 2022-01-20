#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int a,b,c,d;
    
    cin >> a >> b >> c >> d;
    
    int array[4];
    array[0] = a;
    array[1] = b;
    array[2] = d-b;
    array[3] = c-a;
    
    int min = *min_element(array, array+4);
    cout << min << '\n';
    return 0;
}
