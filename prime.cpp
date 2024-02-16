#include<iostream>
using namespace std;
int main()
{
    int i,n;
    bool flag=0;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    for(i=2;i<n-1;i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"Entered number is prime..";
    }
    else
    {
        cout<<"Entered number is not prime";
    }
}