#include <iostream>
#include <vector>
using namespace std;

#define OFFSET 100;

int main() {
    int N;
    cin >> N;
    vector<int> vec(200, 0);

    while (N--) {
        int a, b;
        cin >> a >> b;
        a += OFFSET;
        b += OFFSET;

        for (int i = a; i < b; i++)
            vec[i]++;
    }

    int ans = 0;
    for (int i = 0; i < 200; i++)
        if (ans < vec[i])
            ans = vec[i];

    cout << ans;
}