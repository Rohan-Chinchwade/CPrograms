#include<iostream>
using namespace std;
int main()
{
    int i,n,sum;
    cout<<"Enter the limit: ";//<<endl;
    cin>>n;

    i=1;
    sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}