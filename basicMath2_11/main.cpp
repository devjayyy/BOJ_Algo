//원의 교점 구하는 문제임
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    int T{0};
    int x1{0};
    int y1{0};
    int r1{0};

    int x2{0};
    int y2{0};
    int r2{0};

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        double d = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));//중점 사이의 거리
        /*
        * 두 중점의 거리가 0이고, 반지름이 같은 경우
        * 같은 원
        */
        if (d == 0 && r1 == r2) {
            cout << -1 << '\n';
        }
        /*
        *  두 원이 서로 외접 하거나 내접 하지않은 경우
        *  접점이 없음
        */
        else if (d > r1 + r2 || d < abs(r1 - r2)) { //절대값 함수 abs
            cout << 0 << '\n';
        }
        /*
        * 두 원이 외접 하거나 내접하는 경우
        * 접점이 하나일 경우
        */
        else if (d == r1 + r2 || d == abs(r1 - r2)) {
            cout << 1 << '\n';
        }
        /* 접점이 두 개일 경우 */
        else if (d < r1 + r2) {
            cout << 2 << '\n';
        }
    }
}
     
