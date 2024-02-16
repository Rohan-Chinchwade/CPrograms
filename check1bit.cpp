#include<iostream>
using namespace std;
int main()
{
    int n,cnt=0;
    cout<<"Enter the number in binary:";
    cin>>n;

    for(;n!=0;)
    {
        if(n&1)
        {
            cnt++;
        }
        n=n>>1;
    }
    return cnt;
}