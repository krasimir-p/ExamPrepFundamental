#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void fSum(vector<int>& vNumbers) {
    vector<int>::iterator itr = --vNumbers.end();
    int sum = *itr + *(--itr);
    vNumbers.push_back(sum);
}

void fMultiplication(vector<int>& vNumbers) {
    vector<int>::iterator itr = --vNumbers.end();
    int multiplication = *itr * *(--itr);
    vNumbers.push_back(multiplication);
}

void fDivision(vector<int>& vNumbers) {
    vector<int>::iterator itr = --vNumbers.end();
    int division = *(--itr) / *(++itr);
    vNumbers.push_back(division);
}

void fSubtraction(vector<int>& vNumbers) {
    vector<int>::iterator itr = --vNumbers.end();
    int subtraction = *(--itr) - *(++itr);
    vNumbers.push_back(subtraction);
}

int main()
{
    string line;
    getline(cin, line);
    istringstream istr(line);

    vector<int> vNumbers;
    
    string element;
    while (istr >> element) {
        switch (element[0])
        {case '+':
            fSum(vNumbers);
            break;
        case '*':
            fMultiplication(vNumbers);
            break;
        case '/':
            fDivision(vNumbers);
            break;
        case '-':
            if (element.length() == 1) {
                fSubtraction(vNumbers);
                break;
            }
        default:
            vNumbers.push_back(stoi(element));
            break;
        }
    }

    vector<int>::iterator itr = --vNumbers.end();

//    cout << *itr << ' ' << *(--itr) << endl;
    cout << *itr << ' ';
    cout << *(--itr) << endl;

    return 0;
}
