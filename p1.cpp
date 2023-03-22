#include<iostream>
using namespace std;

int main(){
    // int a[10][10];
    cout<<"Enter the number"<<endl;
    int n ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<"*\t";
        cout<<endl;    
    }

    return 0;
}