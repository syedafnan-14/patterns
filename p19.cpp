#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(char ch=('A'+n-1)-i;ch<=('A'+n-1);ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}