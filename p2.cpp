#include<iostream>
using namespace std;

int main(){
    cout<<"Enter trhe Value of n"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<"*";
        cout<<endl;       
    }
    return 0;
}