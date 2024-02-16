#include<iostream>
using namespace std;
int main()
{
    int i,n,sum;
    cout<<"Enter the limit: ";
    cin>>n;
    sum=0;
   // i=1;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    cout<<"The sum is: "<<sum<<endl;
}