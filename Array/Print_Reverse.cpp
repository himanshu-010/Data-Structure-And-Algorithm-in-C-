#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //normal Array
    cout<<"Normal Array"<<endl;

    for(int i = 0; i < n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout <<"Reverse Array right -> Left" <<endl;
    // reverse Array
    for (int i = n-1; i>=0;i--){
        cout<<a[i]<<" ";
    }











    return 0;
}





