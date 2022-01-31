//출처 : https://cryptosalamander.tistory.com/43
//숫자를 문자열로 변경시켜주고, 문자열 내에 '6'이 연속으로
//3번 나오는 경우를 모두 찾아 N번째 작품의 제목에 들어간 수를
//찾으면 되는 문제
#include <iostream>
#include <string>
using namespace std;
int Findseries(int N)
{
    int i = 666; //
    int series = 0; //
    string target;
    while(1)
    {
        target = to_string(i);
        for(int j = 0; j < target.length()-2; j++)
            if(target[j] == '6' && target[j+1] == '6' && target[j+2] == '6')
            {
                series++;
                if(series == N)
                    return i;
                break;
                //루프문 안에 반드시 break 문을 넣어 한번 찾았으면 다음 숫자로 넘어가게끔
            }
        i++;
    }
}
int main() {
    int N;
    cin >> N;//2
    cout << Findseries(N);
}
