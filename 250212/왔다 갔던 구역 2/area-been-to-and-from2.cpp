#include <iostream>
#include <vector>
using namespace std;

#define OFFSET 1000

vector<int> vec(2000, 0);

void move(int curr, int x) {
    if (x >= 0)
        for (int i = curr; i < curr + x; i++)
            vec[i]++;
    else
        for (int i = curr - 1; i >= curr + x; i--)
            vec[i]++;
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
        curr += x;
    }

    int ans = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] > 1)
            ans++;
    }

    cout << ans;
}