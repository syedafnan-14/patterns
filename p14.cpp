#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n"<<endl;
    int n;
    cin>>n;
    int count =1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<count;
            count++;
        }
        cout<<endl;

    }
    return 0;
}