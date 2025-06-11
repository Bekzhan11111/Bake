#include <iostream>
using namespace std;

int main() {
    for (int battery = 100; battery >= 0; battery -= 1) {
        cout << "Battery: " << battery << "%" << endl;
        if (battery <= 20) {
            cout << "Low Battery!Turn on saving mode." << endl;
            break;
        }
    }
    return 0;
}
