#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;  
    cout  << "Before Swapping" << endl;  
    cout << "a = " << a << ", b = " << b << endl;
    
    // int temp = a;
    // a = b;
    // b = temp;
    // using Xor (^) method

    // a = a^b;
    // b = a^b;
    // a = a^b;

    // using inbuild function
    swap(a, b);
    
    cout << "After Swapping" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}