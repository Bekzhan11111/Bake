// гуляем когда меньше 30
#include <iostream>
using namespace std;

int main() {
    int temp;
    for (int day = 1; day <= 7; day++) {
        cin >> temp;
        if (temp > 30) continue;
        cout << "Day" << day << ": Go out " << temp << "°C" << endl;
    }
    return 0;
}
