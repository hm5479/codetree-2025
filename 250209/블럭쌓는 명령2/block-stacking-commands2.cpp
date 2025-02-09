#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int* arr = new int[N];
    fill(arr, arr + N, 0);

    while (K--) {
        int a, b;
        cin >> a >> b;

        for (int i = a; i <= b; i++)
            arr[i]++;
    }

    int max = arr[0];
    for (int i = 0; i < N; i++)
        if (max < arr[i])
            max = arr[i];

    cout << max;
    
    delete[] arr;
}