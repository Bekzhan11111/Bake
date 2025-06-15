#include <iostream>
using namespace std;

int main() {
    int a[4][4];
    int  maxSum = 0;
    int row = 0;

    for (int i = 0; i < 4; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
            sum += a[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            row = i+1;
        }
    }

    cout << "Row " << row << " has the maximum sum: " << maxSum << endl;
    return 0;
}
