#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int num;
    cin >> num;
    cin.ignore();

    if (num <= 0) {
        cout << "No" << endl;
        return 0;
    }

    vector<int> line;
    line.reserve(num);

    for (int i = 0; i <= num - 1; i++) {
       
        int current;
        cin >> current;
        line.push_back(current);
    }

    int sum = 0;
    for (int current : line) {
        sum += current;
    }

    double average = static_cast<double> (sum) / num;
    
    vector<int> fun;
    for (int current : line) {
        if (current < average && current % 2 == 0) {
            fun.push_back(current);
        }
    }

    if (fun.size() == 0) {
        cout << "No" << endl;
        return 0;
    }

    sort(fun.begin(), fun.end(), greater<>());

    for (int current : fun) {
        cout << current << ' ';
    }
    cout << endl;

    return 0;
}
