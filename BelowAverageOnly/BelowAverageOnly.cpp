#include <iostream>

using namespace std;

int readArr(int arr[]) {
    int number;
    cin >> number;
    for (int i = 0; i <= number - 1; i++) {
        cin >> arr[i];
    }

    return number;
}

float average(int arr[], int number) {
    
    int sum = 0;
    for (int i = 0; i <= number - 1; i++) {
        sum += arr[i];
    }

    return static_cast<float>(sum) / number;
}

int findSum(int arr[], int numer, int start, float average) {
    int sum = 0;
    for (int i = start; i <= numer - 1; i = i + 2) {
        if (arr[i] <= average) {
            sum += arr[i];
        }
    }

    return sum;
}

int main()
{
    const int MAX_NUMBER = 100;
    int arr[MAX_NUMBER];

    int number = readArr(arr);
    float avg = average(arr, number);
    int evenIndexSum = findSum(arr, number, 0, avg);
    int oddIndexSum = findSum(arr, number, 1, avg);

    cout << evenIndexSum * oddIndexSum << endl;

    return 0;
}
