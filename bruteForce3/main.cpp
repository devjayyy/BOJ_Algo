//몸무게와 키를 함께 저장하는 pair형식의 배열을 활용하여,
//자신보다 큰 몸무게와 키를 가진 사람이 있을 경우
//등수를 1등씩 밀어나가는 방식으로 풀이
#include <iostream>
#include <utility> //pair
using namespace std;

int main() { //덩치등수
    int num;
    int rank = 1;
    pair<int,int> arr[50]; //pair class//몸무게//키
    cin >> num;
    for(int i = 0; i < num; i++)
        cin >> arr[i].first >> arr[i].second;
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
            if(arr[i].first < arr[j].first && arr[i].second < arr[j].second)
                rank++;
        cout << rank << ' ';
        rank = 1;
    }
}
