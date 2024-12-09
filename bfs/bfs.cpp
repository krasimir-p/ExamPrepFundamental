#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    const int MAX_EDGE = 100;
    vector<int> edgesArr[MAX_EDGE];

    int arrisNumber;
    cin >> arrisNumber;
    cin.ignore();

    for (int i = 1; i <= arrisNumber; i++) {
        
        string arris;
        getline(cin, arris);

        istringstream istr(arris);

        string edgeString;
        istr >> edgeString;
        int edge = stoi(edgeString);

        string neighborString;
        istr >> neighborString;
        int neighbor = stoi(neighborString);

        edgesArr[edge].push_back(neighbor);
    }

    int start;
    cin >> start;

    int curr;

    list<int> temp;
    bool boolEdgesArr[MAX_EDGE] = { false };

    temp.push_back(start);
    while (temp.size()) {
        curr = *temp.begin();
        temp.pop_front();
        for (int n : edgesArr[curr]) {
            if (boolEdgesArr[n] == false) {
                boolEdgesArr[n] = true;
                temp.push_back(n);
            }
        }
    }

    for (int i = 1; i <= MAX_EDGE - 1; i++) {
        if (boolEdgesArr[i]) {
            cout << i << ' ';
        }
    }
    cout << endl;

    return 0;
}
