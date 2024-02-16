#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cout<<"Enter the limit: ";
    cin>>n;
    a=0;
    b=1;
    cout<<a<<b;
    for(int i=1;i<=n-2;i++)
    {
        int nxt=a+b;
        cout<<nxt;
        a=b;
        b=nxt;

    }
}