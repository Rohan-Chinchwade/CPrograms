#include<iostream>
using namespace std;
int main()
{
    int n,col,row=0;
    cin>>n;
    
    row=1;
    while(row<=n)
    {
        int space=row=1;
        while(space)
        {
            cout<<" ";
            space++;
        }
        int col=1;
        while(col<=row)
        {
            cout<<"*";
            
        }
        row++;
        cout<<endl;
    }
}