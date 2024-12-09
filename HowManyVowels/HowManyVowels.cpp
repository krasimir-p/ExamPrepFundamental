#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int vowels = 0;
    int nonVowels = 0;
    for (int i = 1; i <= number; i++) {
        char symbol;
        cin >> symbol;
        if (symbol == 'a' || symbol == 'A' || symbol == 'e' || symbol == 'E' ||
            symbol == 'i' || symbol == 'I' || symbol == 'u' || symbol == 'U' || 
            symbol == 'y' || symbol == 'Y' || symbol == 'o' || symbol == 'O') {
            vowels++;
        }
        else if (isalpha(symbol)) {
            nonVowels++;
        }
    }

    cout << vowels << ' ' << nonVowels << endl;

    return 0;
}
