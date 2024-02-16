#include<stdio.h>
int main()
{
    int i,n=0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("\t%d",i);
        i++;
    }
    return 0;
}