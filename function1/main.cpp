#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

long long sum(std::vector<int> &a);

long long sum2(std::vector<int> &a);

int main(int argc, const char * argv[]) {
    int n{0};
    int size{0};
    vector<int> array{};
    
    cin >> size;
    for(int i = 0; i < size; i++) {//값 넣기
        cin >> n;
        array.push_back(n);
        
    }
    cout << sum(array);
    cout << sum2(array);

    return 0;
}

long long sum(vector<int> &a) {
    long long total{0};
    for(int& element : a) {
        total += element;
    }
    return total;
}
//반복문을 사용하나 라이브러리에 내장된 함수를 사용하나 비용은 똑같음

long long sum2(vector<int> &a) {//numeric 라이브러리 accumulate 사용
    long long total{0};
    total = accumulate(a.begin(), a.end(), 0LL);
    return total;
}

