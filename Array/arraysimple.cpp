#include<iostream>
using namespace std;
int main()
{
    int a [10];
    a[0] = 20;
    a[9] = 70;
    cout << a[0] << " "<< a[9]<<endl;

    int b[19];
    for(int i  = 0; i<10; i++) {
        b[i] = i*i;
        cout << b[i] << " ";

    }

    return 0;
};