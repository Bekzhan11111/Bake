#include <iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum:  "<<sum;
    return 0;
}