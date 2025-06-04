#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double c;
    cin>>c;
    double f = (c*9/5)+32;
    cout<<fixed<<setprecision(1);
    cout<<"Temperature inb Farenheit: "<<f;
    return 0;
}