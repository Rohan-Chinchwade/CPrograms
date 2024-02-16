#include<iostream>
using namespace std;
int main()
{
    int no,rem,rev=0;
    cout<<"Enter the number: ";
    cin>>no;
    for(;no!=0;)
    {
        rem=no%10;
        if((rev>INT_MAX/10)||(rev<INT_MIN/10))
        {
            return 0;
        }
        rev=rev*10+rem;
        no/=10;

    }
        
    
    cout<<"Reverse of number: "<<rev;
}