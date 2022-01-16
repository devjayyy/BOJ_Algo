//문자열을 받으면 그 문자에 해당하는 숫자를 반환하여 더해줌
#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string words;
    int count{0};
    int result{0};
    cin >> words;
    
    for(char& element : words) {
        switch (element) {
            case 'A':
            case 'B':
            case 'C':
                count = 3;
                break;
            case 'D':
            case 'E':
            case 'F':
                count = 4;
                break;
            case 'G':
            case 'H':
            case 'I':
                count = 5;
                break;
            case 'J':
            case 'K':
            case 'L':
                count = 6;
                break;
            case 'M':
            case 'N':
            case 'O':
                count = 7;
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                count = 8;
                break;
            case 'T':
            case 'U':
            case 'V':
                count = 9;
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                count = 10;
                break;
            default:
                break;
        }
        result += count;
    }
    cout << result << '\n';
    return 0;
}
