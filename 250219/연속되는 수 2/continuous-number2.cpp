#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; i++)
        cin >> vec[i];

    int ans = 0, cnt = 0;
    for (int i = 0; i < N; i++) {
        if (i > 0 && vec[i] == vec[i - 1])
            cnt++;
        else
            cnt = 1;
        ans = max(cnt, ans);
    }

    cout << ans;
}