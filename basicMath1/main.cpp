//시간 초과
//손익분기점 구하기
//총비용 = fixedCost + ( variableCost * sales ) , sales = 판매 개수
//총 수익(판매비용) = price * sales
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    long fixedCost{0};
    long variableCost{0};
    long price{0};
    long totalCost{0};
    long income{0};
    long sales{-1};
        
    cin >> fixedCost;
    cin >> variableCost;
    cin >> price;
    
    while (variableCost < price && totalCost >= income) {
        sales++;// 판매량 증가
        totalCost = fixedCost + (variableCost * sales);
        income = price * sales;
    }
    
    cout << sales << '\n';
    return 0;
}
