#include <iostream>
using namespace std;
int main(){
    float w,h;
    cin>>w>>h;
    float bmi = w/(h*h);
    cout<<"Your BMI is "<<bmi;
    return 0;
}