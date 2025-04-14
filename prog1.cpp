#include<iostream>
using namespace std;

int main()
{
    int i,j;

    for(i=1; i<=5; i++)
    {
        for(j=41; j<=40+i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}