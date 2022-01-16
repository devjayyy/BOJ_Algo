//결국 최소의 봉지를 들고가려면, 5kg짜리 봉지를 최대한 많이 활용하여야
//하기 때문에, 설탕의 무게 N을 먼저 5로 나눠 본 후에,
//3으로 나눠 떨어진다면 바로 정답 출력,
//아니라면 5kg 봉지를 한 개씩 줄여나가면서 최소 개수의 봉지를 구하면 된다.

#include <iostream>
using namespace std;
int main() {
    int kg;
    cin >> kg;
    int a,b;
    a = kg/5;
    while(1)
    {
        if(a < 0)
        {
            cout << "-1";
            return 0;
        }
        if((kg-(5*a))%3 == 0)
        {
            b = (kg-(5*a))/3;
            break;
        }
        a--;
    }
    cout << a+b;
    return 0;
}
