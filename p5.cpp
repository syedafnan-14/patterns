#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n"<<endl;
    int n;
    cin>>n;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
            cout<<j+1;
        cout<<endl;       
    }
    return 0;
}