#include <iostream>
#include <string>
#include <algorithm> //reverse

using namespace std;

int main(int argc, const char * argv[]) {
    string A;
    string B;
    
    cin >> A;
    cin >> B;
    
    reverse(A.begin(), A.end()); //A를 reverse해서 저장해줌
    reverse(B.begin(), B.end()); //B를 reverse해서 저장해줌


    
    if(stoi(A) > stoi(B))
        cout << A << '\n';
    else
        cout << B << '\n';
    return 0;
}
