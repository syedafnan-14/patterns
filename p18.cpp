#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the value of n" << endl;
    int n;
    cin >> n;
    int i_space = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
            cout << "*";

        for (int j = 0; j < i_space; j++)
            cout << " ";

        for (int j = 0; j < n - i; j++)
            cout << "*";

        i_space += 2;

        cout << endl;
    }
    i_space=2*n-2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
            cout << "*";

        for (int j = 0; j < i_space; j++)
            cout << " ";

        for (int j = 0; j <=i; j++)
            cout << "*";

        i_space -= 2;

        cout << endl;
    }
    return 0;
}