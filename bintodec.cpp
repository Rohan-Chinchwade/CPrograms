#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int no,i,digit,ans=0;
    cout<<"Enter the binary number: ";
    cin>>no;

    while(no!=0)
    {
        digit=no%10;
        if(digit==1)
        {
            ans=ans+pow(2,i);
            
        }
        no/=10;
        i++;

    }
    cout<<"The number: "<<ans;
}