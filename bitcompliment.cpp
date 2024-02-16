#include<iostream>
using namespace std;
int main()
{
    int m,n=0;
    int mask=0;
    cout<<"Enter the number: ";
    cin>>n;
    m=n;
    while(m!=0)
    {
        
        mask=(mask<<1)|1;
        m=m>>1;
        
    }
    int ans=(~n)&mask;
    return ans;
}