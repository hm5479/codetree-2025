#include <iostream>
#include <vector>
using namespace std;

int cnt = 0;

vector<int> change(int N, int B) {
    vector<int> ans(10);
    while (true) {
        if (N < B) {
            ans[cnt] = N;
            break;
        } else {
            ans[cnt] = N % B;
            N /= B;
            cnt++;
        }
    }

    return ans;
}

int main() {
    int N, B;
    cin >> N >> B;

    vector<int> ans = change(N, B);

    for (int i = cnt; i >= 0; i--)
        cout << ans[i];
}