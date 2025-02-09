#include <iostream>
#include <vector>
using namespace std;

vector<int> strToDigit(string str) {
    int size = str.size();
    vector<int> digit(size);

    for (int i = 0; i < size; i++)
        digit[i] = (str[i] - '0');
    
    return digit;
}

int getDecimal(vector<int> digit) {
    int dec = 0;

    for (int i = 0; i < digit.size(); i++)
        dec = dec * 2 + digit[i];

    return dec;
}

int main() {
    string str;
    cin >> str;
    vector<int> digit = strToDigit(str);

    cout << getDecimal(digit);
}