#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    vector<int> digit(32);

    while (true) {
        if (n < 2) {
            digit[cnt] = n;
            break;
        } else {
            digit[cnt] = n % 2;
            n /= 2;
            cnt++;
        }
    }

    for (int i = cnt; i >= 0; i--)
        cout << digit[i];
}