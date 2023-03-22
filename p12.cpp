#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the value of n"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*n;j++)
        {
            if(((2*n-1)-i)<=j)
                cout<<(2*n-j);
            else if (j<=i)
            {
                cout<<j+1;         
            }
            else
                cout<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}