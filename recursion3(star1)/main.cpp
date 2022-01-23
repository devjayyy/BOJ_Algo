//분할정복법
//이 문제의 핵심 : n을 계속해서 재귀호출할 때 3으로 나눠주기
// : 빈 칸을 검사하는 조건이 3으로 나눴을 때 나머지가 1인 것
#include <iostream>
using namespace std;

void star(int i, int j, int n) { //star는 n을 분할해줌
    //cout << " i = " << i << ", j = " << j << ", n = " << n << '\n';
    if ((i / n) % 3 == 1 && (j / n)% 3 == 1) { //빈칸을 검사하는 조건
        cout << " ";
    }
    else if (n / 3 == 0) { //
        cout << "*";
    }
    else {
        star(i, j, n / 3);
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) { //0..<n
            star(i, j, n);
        }
        cout << "\n";
    }
}
