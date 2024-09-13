#include <iostream>
using namespace std;
int main (){
    cout<<"Enter thr number of element"<<endl;
    int n;
    cin>> n;
    int a[n]; // given input
    for(int i = 0 ; i<n ; i++){
         cin >>a[i];

    }
    int sum = 0; // sum of Given array
    for (int i=0; i<n;i++){
        sum = sum + a[i];
    }
    cout << sum<<endl;
    return 0;
}