#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void star_init(vector<vector<char>>& v, int x, int y, int h) {
    if (h == 1) {
        v[x][y] = '*';
        return;
    }

    int div = h / 3; //분할

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1) continue;
            star_init(v, x + (i * div), y + (j * div), div);
        }
    }
}
int main() {
    int N;
    cin >> N; //3,9,27,81,...
    vector<vector<char>> v(N, vector<char>(N, ' '));

    star_init(v, 0, 0, N); //별 찍기

    for (auto& e : v) {
        for (auto c : e) {
            cout << c;
        }
        cout << '\n';
    }

    return 0;
}
