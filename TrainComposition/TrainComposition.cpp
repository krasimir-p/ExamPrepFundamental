#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void fPrint(vector<string>& vTrain) {
    cout << '|';
    for (string wagonCargo : vTrain) {
        if (wagonCargo == "empty") {
            cout << " |";
        }
        else {
            cout << wagonCargo << '|';
        }
    }

    cout << endl;
}

void inputTrain(vector<string>& vTrain) {
    string cargo;
    
    while (getline(cin, cargo), cargo != "end") {
        vTrain.push_back(cargo);
    }
}

void fLeave(vector<string>& vTrain, string command) {
    istringstream istr(command);
    
    int position;
    string useless;
    istr >> useless;
    istr >> position;

    vTrain.erase(vTrain.begin() + --position );

    fPrint(vTrain);
}

void fMove(vector<string>& vTrain, string command) {
    istringstream istr(command);
   
    string useless;
    int oldPosition;
    int newPosition;
    istr >> useless;
    istr >> oldPosition;
    istr >> newPosition;
    
    oldPosition--;
    newPosition--;
    
    string wagonCargo = vTrain[oldPosition];

    vTrain.erase(vTrain.begin() + oldPosition);
    vTrain.insert(vTrain.begin() + newPosition, wagonCargo);

    fPrint(vTrain);
}

int main()
{
    vector<string> vTrain;
    inputTrain(vTrain);

    string command = "";
    
    while ((getline(cin, command)), command != "E") {
        switch (command[0])
        {
        case 'P':
            fPrint(vTrain);
            break;
        case 'L':
            fLeave(vTrain, command);
            break;
        case 'M':
            fMove(vTrain, command);
        default:
            break;
        }
    }
   
    return 0;
}
