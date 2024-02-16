#include<iostream>
using namespace std;
int main()
{
    int row,col,n=0;
    cout<<"Enter the limit: ";
    cin>>n;

    for(row=1;row<=n;row++)
    {
        char ch='A'+n-row;
        for(col=1;col<=row;col++)
        {
            //char ch='A'+n-row;
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;
    }
}