#include<iostream>
using namespace std;

int main()
{
    int i,j,num=11;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
    return 0;
}