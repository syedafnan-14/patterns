#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n"<<endl;
    int n;
    cin>>n;
    for(int i=n;i>=0;i--)
    {
        for(char j='A';j<='A'+i;j++)
            cout<<j;

        cout<<endl;
    }
    return 0;
}