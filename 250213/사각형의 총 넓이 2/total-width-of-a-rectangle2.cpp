#include <iostream>
using namespace std;

#define OFFSET 100

int main() {
    int N;
    cin >> N;

    int arr[200][200]{0};
    while (N--) {
        int x[2];
        int y[2];
        cin >> x[0] >> y[0] >> x[1] >> y[1];

        x[0] += OFFSET;
        x[1] += OFFSET;
        y[0] += OFFSET;
        y[1] += OFFSET;

        for (int i = x[0]; i < x[1]; i++)
            for (int j = y[0]; j < y[1]; j++)
                arr[i][j]++;
    }
    int ans = 0;
    for (int i = 0; i < 200; i++)
        for (int j = 0; j < 200; j++)
            if (arr[i][j] > 0)
                ans++;

    cout << ans;
}