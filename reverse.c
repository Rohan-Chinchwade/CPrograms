#include<stdio.h>
int main()
{
    int n=124;
    int res,rem=0;

    while(n!=0)
    {
        rem=n%10;
        res=res*10+rem;
        n=n/10;
    }
    printf("Reverse of the number:%d",res);
    return 0;
}
