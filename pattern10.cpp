#include<iostream>
using namespace std;
int main()
{
    int row,col,n=0;
    cout<<"Enter the number of rows:";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row+1;col++)
        {
            cout<<"*";

        }
        cout<<endl;
    }
}