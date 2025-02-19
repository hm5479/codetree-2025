#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; i++)
        cin >> vec[i];

    int ans = 1, comp = 1;
    int pre = vec[0];
    for (int i = 1; i < N; i++) {
        if (pre == vec[i])
            comp++;
        else {
            if (ans < comp)
                ans = comp;
            pre = vec[i];
        }
    }

    cout << ans;
}