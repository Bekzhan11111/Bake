// positive,even,more than 100 number
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout <<(x > 0) && (x % 2 == 0) && (x > 100) ;
    return 0;
}
