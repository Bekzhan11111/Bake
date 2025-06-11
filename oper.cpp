// Find the area,perimeter,remainder,difference. Arithmetic Opers
#include <iostream>
using namespace std;

int main() {
    int l, w;
    cin >> l>> w;
    int perimeter = 2 * (l + w);
    int area = l * w;
    cout << "Remainder: " << l % w << endl;
    cout << "Difference: " << l - w << endl;
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;
    cout << "Increment: " << ++l << endl;
    cout << "Decrement: " << --w << endl;
    return 0;
}
