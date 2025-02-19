#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    vector<int> vec(N);
    for (int i = 0; i < N; i++)
        cin >> vec[i];

    int ans = 0, cnt = 0;
    for (int i = 0; i < N; i++) {
        if (vec[i] > T)
            cnt++;
        else
            cnt = 0;
        ans = max(ans, cnt);
    }

    cout << ans;
}