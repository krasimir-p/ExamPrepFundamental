#include <iostream>
#include <string>

using namespace std;

int main()
{
    string ece;
    getline(cin, ece);

    int counts[1000] = { 0 };
    int punctCount = 0;

    for (char symbol : ece) {
        if (symbol == '|') {
            counts[punctCount]++;
            punctCount = 0;
        }
        else if (ispunct(symbol)) {
            punctCount++;
        }
    }
    
    for (int i = 0; i <= 999; i++) {
        if (counts[i] != 0) {
            cout << i << " symbol sentences: " << counts[i] << endl;
        }
    }

    return 0;
}
