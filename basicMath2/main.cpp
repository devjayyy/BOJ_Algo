//메모리 초과
//아이디어 : 다차원 배열 사용하기
//{ {1}, {2,3,4,5,6,7}, {8,9,10,11,12,13,14,15,16,17,18,19},
//{20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38},
//...}
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    int honeycombNum{0}; //벌집 수 입력
    int row{0}; //열
    int check{1}; //벌집 수 몇 개 인지 체크할 변수(1,2,3,4,5,...)
    int columnCheck{1}; //행의 범위를 조절해주는 변수(1, 6, 12, ...)
      int count{5}; //column의 범위를 늘려주는 변수(5,6,7,8,...)
    vector<vector<int>> honeycomb;
    vector<int> inside;
    
    cin >> honeycombNum;
    
    while(check <= honeycombNum) //벌집 수가 입력한 수랑 같을 때까지
    {
        for(int column = 0; column < columnCheck; column++) {
            inside.push_back(check++);
            if(check > honeycombNum) break; // 벌집이 입력한 수보다 커지면 반복문 빠져나오기
        }
        honeycomb.push_back(inside);
        columnCheck += count;
        count++;
        row++;
        inside.clear();
    }
//    for (int i = 0; i < honeycomb.size(); i++) { //잘 들어갔나 확인
//        for (int j = 0; j < honeycomb[i].size(); j += 1) {
//            cout << honeycomb[i][j] << " ";
//        }
//        cout << '\n';
//    }
        cout << row << '\n';
    return 0;
}
