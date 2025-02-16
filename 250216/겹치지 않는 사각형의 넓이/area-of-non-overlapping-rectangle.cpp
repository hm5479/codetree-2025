#include <iostream>
#include <vector>
using namespace std;

#define OFFSET 1000

int main() {
    int x1[3], y1[3];
    int x2[3], y2[3];
    vector<vector<int>> vec(2000, vector<int>(2000, 0));

    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];

    for (int i = 0; i < 3; i++) {
        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;
    }

    for (int i = x1[0]; i < x2[0]; i++)
        for (int j = y1[0]; j < y2[0]; j++)
            vec[i][j]++;

    for (int i = x1[1]; i < x2[1]; i++)
        for (int j = y1[1]; j < y2[1]; j++)
            vec[i][j]++;

    for (int i = x1[2]; i < x2[2]; i++)
        for (int j = y1[2]; j < y2[2]; j++)
            vec[i][j] = 0;

    int ans = 0;
    for (int i = 0; i < 2000; i++)
        for (int j = 0; j < 2000; j++)
            if (vec[i][j] > 0)
                ans++;

    cout << ans;
}