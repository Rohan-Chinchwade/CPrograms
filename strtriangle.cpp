#include<iostream>
using namespace std;
int main()
{
    int i,j,n=0;
    cout<<"Enter the no of rows:";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}