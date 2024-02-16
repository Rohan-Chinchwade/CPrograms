#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=0;i<=31;i++)
    {
        int ans=pow(2,i);
        if(ans==n)
        {
            cout<<"Power of two";
        }
        /*else
        {
            cout<<"Not power of two";
        }*/
        
    }
    
    
}