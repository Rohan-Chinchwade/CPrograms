#include<iostream>
using namespace std;
int main()
{
    int i,j,n,cnt=0;
    cout<<"Enter the no of rows: ";
    cin>>n;
    cnt=1;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            char ch='A';
            cout<<ch+i-1;
        }
        cout<<endl;
    }
}