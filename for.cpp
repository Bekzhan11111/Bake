#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    cout << "Sum of even numbers: " << sum << endl;
    return 0;
}
