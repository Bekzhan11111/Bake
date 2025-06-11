// Reverse of number while
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    cout << "Reverse of number: " << r << endl;
    return 0;
}
