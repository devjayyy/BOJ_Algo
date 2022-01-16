#include <iostream>
#include <vector>

using namespace std;
int main(int argc, const char * argv[]) {
    int size{0};
    int stuNum{0};
    int score{0};
    int sum{0};
    int aboveAvg{0};
    double average{0};
    double result{0};
    vector<int> scores{};
    
    cin >> size;
    
    for(int i = 0; i < size; i++) {
        aboveAvg = 0;
        sum = 0;
        cin >> stuNum;
        for(int j = 0; j < stuNum; j++) {//점수 넣기
            cin >> score;
            scores.push_back(score);
            sum += scores[j];
        }
        average = sum / stuNum;// 평균
        for(int j = 0; j < stuNum; j++) { //평균과 비교
            if(scores[j] > average) {
                aboveAvg++;
            }
        }
        result = (double)aboveAvg / stuNum * 100; //평균 이상 학생 비율 계산
        cout << fixed;
        cout.precision(3);
        cout << result << "%\n";
        
        scores.clear();
    }
    
    return 0;
}
