#include<iostream>
using namespace std;
int main()
{
    int i,j,n=0;
    cout<<"Enter the limit: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<n-j+1;
        }
        cout<<endl;
    }
}