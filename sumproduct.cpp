#include<iostream>
using namespace std;
int main()
{
    int no,rem,sum,pro=0;
    cout<<"Enter the number: "<<endl;
    cin>>no;
    pro=1;
    for(;no!=0;)
    {
        rem=no%10;
        sum+=rem;
        pro*=rem;
        no/=10;
    }
    cout<<"Sum is: "<<sum<<endl;
    cout<<"Product is: "<<pro<<endl;
}