//출처 : https://cryptosalamander.tistory.com/20


//규칙을 찾아내고, 등비수열의 합을 활용하는 접근을 할 경우 쉽게 해결할 수 있으나,
// 규칙을 못 찾게되면 막연한 반복문으로 인해 시간초과가 발생하는 문제이다.

// 수학 1 카테고리의 문제들은 대부분 규칙성을 찾아야 하는 문제들이기 때문에
//단순 반복문으로는 해결할 수 없다는 사실을 감안하고 풀이를 진행하는 것이 좋다.

using namespace std;
int main() {
    int number;
    cin >> number;
    int i = 0;
    for(int sum=2; sum <= number; i++)
        sum += 6*i;
    if(number == 1) i=1;
    cout << i;
    return 0;
}
