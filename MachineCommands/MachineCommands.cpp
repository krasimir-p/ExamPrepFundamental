#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

void fSum(vector<int>& Numbers) {
    vector<int>::iterator itr = --Numbers.end();
    int endSum = *itr + *(--itr);
    Numbers.pop_back();
    Numbers.pop_back();
    Numbers.push_back(endSum);
}

void fSubtract(vector<int>& Numbers) {
    vector<int>::iterator itr = --Numbers.end();
    int endSubtract = *itr - *(--itr);
    Numbers.pop_back();
    Numbers.pop_back();
    Numbers.push_back(endSubtract);
}

void fConcat(vector<int>& Numbers) {
    vector<int>::iterator itr = --Numbers.end();
    string sEnd = to_string(*itr);
    string sPreEnd = to_string(*(--itr));
    string sEndConcat = sPreEnd + sEnd;
    int endConcat = stoi(sEndConcat);
    Numbers.pop_back();
    Numbers.pop_back();
    Numbers.push_back(endConcat);
}

void fDiscard(vector<int>& Numbers) {
    Numbers.pop_back();
}

int main()
{
    string input;
    vector<int> vNumbers;
    while (cin >> input, input != "end") {
        if (isdigit(*input.begin()) || *input.begin() == '-') {
            vNumbers.push_back(stoi(input));
        }
        else if (input == "sum") {
            fSum(vNumbers);
        }
        else if (input == "subtract") {
            fSubtract(vNumbers);
        }
        else if (input == "concat") {
            fConcat(vNumbers);
        }
        else if (input == "discard") {
            fDiscard(vNumbers);
        }
    }

    for (int num : vNumbers) {
        cout << num << endl;
    }

    return 0;
}
