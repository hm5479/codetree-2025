#include <iostream>
#include <vector>
using namespace std;

#define OFFSET 100000
vector<int> color(2 * OFFSET, -1);  // 0 - white, 1 - black, 2 - gray
vector<int> whiteCnt(2 * OFFSET, 0);
vector<int> blackCnt(2 * OFFSET, 0);

void move(int curr, int x) {
    if (x >= 0)  // Right - black
        for (int i = curr; i < curr + x; i++) {
            blackCnt[i]++;
            if (blackCnt[i] >= 2 && whiteCnt[i] >= 2)
                color[i] = 2;
            else
                color[i] = 1;
        }
    else  // Left - white
        for (int i = curr; i > curr + x; i--) {
            whiteCnt[i]++;
            if (blackCnt[i] >= 2 && whiteCnt[i] >= 2)
                color[i] = 2;
            else
                color[i] = 0;
        }
}

int main() {
    int N;
    cin >> N;

    int curr = OFFSET;
    while (N--) {
        int x;
        char dir;
        cin >> x >> dir;

        if (dir == 'L')
            x *= -1;

        move(curr, x);
        if (x > 0)
            curr += x - 1;
        else
            curr += x + 1;
    }

    int white = 0, black = 0, gray = 0;
    for (int i = 0; i < color.size(); i++)
        if (color[i] == 0)
            white++;
        else if (color[i] == 1)
            black++;
        else if (color[i] == 2)
            gray++;

    cout << white << " " << black << " " << gray;
}