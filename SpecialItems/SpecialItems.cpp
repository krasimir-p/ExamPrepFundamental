#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line;
    string specialLine = "";
    getline(cin, line);

    
    char previousSymbol = '\n';

    for (char symbol : line) {
        if (symbol == 'a' || symbol == 'e' || symbol == 'i' || symbol == 'o' || symbol == 'u') {
            specialLine.push_back(symbol);
            previousSymbol = symbol;
        }
        else if (previousSymbol != symbol) {
            specialLine.push_back(symbol);
            previousSymbol = symbol;
        }

    }

    cout << specialLine << endl;

    return 0;
}
