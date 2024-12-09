#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string message;
    getline(cin, message, '.');

    int sum = 0;
    int digit = 0;
    for (char symbol : message) {
        if (isdigit(symbol)) {
            digit = symbol - '0';
            sum += digit;
        }
    }

    if ((sum >= 65 && sum <= 90) || (sum >= 97 && sum <= 122)) {
        char codeLetter = sum;
        cout << codeLetter << endl;
    }
    else {
        cout << sum << endl;
    }

    return 0;
}
