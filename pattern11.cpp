#include<iostream>
using namespace std;//Not correct
int main()
{
    int n=4;
    int row=1;
    while(row<=n)
    {
        int space=row-1;
        while(space)
        {
            cout<<" ";
            space++;
        }
        int col=1;
        while(col<=row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
    }
}