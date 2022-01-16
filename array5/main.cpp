//세준이는 기말고사를 망쳤다. 세준이는 점수를 조작해서 집에 가져가기로 했다. 일단 세준이는 자기 점수 중에 최댓값을 골랐다. 이 값을 M이라고 한다. 그리고 나서 모든 점수를 점수/M*100으로 고쳤다.
//
//예를 들어, 세준이의 최고점이 70이고, 수학점수가 50이었으면 수학점수는 50/70*100이 되어 71.43점이 된다.
//
//세준이의 성적을 위의 방법대로 새로 계산했을 때, 새로운 평균을 구하는 프로그램을 작성하시오.

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    int length{0};
    int maxNum{0};
    int score{0};
    double sum{0};
    double average{0};
    double changedScore{0};
    vector <int> scores;
    vector <double> changed;
    
    cin >> length; //점수 개수
    
    for(int i = 0; i < length; i++) { //점수 넣기
        cin >> score;
        scores.push_back(score); //값을 뒤에 추가
    }
//    for(int i = 0; i < length; i++) { //제대로 들어갔나 체크
//        cout << scores[i] << '\t';
//    }
//    cout << '\n';
    
    maxNum = *max_element(scores.begin(), scores.end());
    //cout << "max : " << maxNum << '\n';
    
    for(int i = 0; i < length; i++) {
        changedScore = (double)scores[i]/maxNum*100;
        changed.push_back(changedScore); //값을 뒤에 추가
//        cout << "changed : " << changed[i] << '\n';
        sum += changed[i];
//        cout << "sum : " << sum << '\n';
    }
    
    average = sum / length;
    cout << average << '\n';

    return 0;
}

