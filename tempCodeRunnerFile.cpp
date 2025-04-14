#include<iostream>
using namespace std;

int main()
{
    int i,j,k;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout << j << " ";
        }
        for(k=1; k<=(5-i)*2; k++)
        {
            cout << "  ";
        }
        for(j=0+i; j>=1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}