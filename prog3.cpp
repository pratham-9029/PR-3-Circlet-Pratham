#include<iostream>
using namespace std;

int main()
{
    int i,j,k;

    for(i=1; i<=5; i++)
    {
        for(k=5; k>=i; k--)
        {
            cout << "  ";
        }
        for(j=6-i; j<=5; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}