#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n"<<endl;
    int n;
    cin>>n;
    for(char i='A';i<'A'+n;i++)
    {
        for(int j='A';j<='A'-('A'-i);j++)
            cout<<i;

        cout<<endl;
    }
    return 0;
}