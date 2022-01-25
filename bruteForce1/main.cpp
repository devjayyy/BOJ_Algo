//브루트 포스 : 조합 가능한 모든 문자열을 하나씩 대입해 보는 방식으로 암호를 해독하는 방법
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int cardNum{0};
    int number{0};
    vector <int>cards;
    cin >> cardNum >> number;
    
    for(int i = 0; i < cardNum; i++) {
        int value{0};
        cin >> value;
        cards.push_back(value);
    }
    //for(int i = 0; i < cards.size(); i++) cout << cards[i] << " "; //배열에 잘 들어감

    int consider{0}; //비교값
    //cout << consider <<'\n'; //처음에 잘 들어갔는지
    int sum{0};
    for(int i = 0; i < cards.size() - 2; i++) {
        for(int j = i + 1; j < cards.size() - 1; j++) {
            for(int k = j + 1; k < cards.size(); k++) {
                sum = cards[i] + cards[j] + cards[k];
                //cout << "sum : " << sum <<'\n';
                if(consider < sum && sum <= number) consider = sum;
                //cout << "consider : " << consider <<'\n';
            }
        }
    }
    cout << consider <<'\n';
    return 0;
}

