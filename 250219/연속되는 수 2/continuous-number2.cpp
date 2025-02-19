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
    for (int i = 1; i < N; i++) {
        if (vec[i - 1] == vec[i])
            comp++;
        else {
            if (ans < comp)
                ans = comp;
            vec[i - 1] = vec[i];
        }
    }
    if (ans < comp)
        ans = comp;

    cout << ans;
}