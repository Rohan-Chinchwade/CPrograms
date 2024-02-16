#include<stdio.h>
int main()
{
    int i,j,sp=0;
    int n=3;
    for(i=1;i<=n;i++)
    {
        for(sp=3-i;sp>0;sp--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--)
    {
        for(sp=n-i;sp>0;sp--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");

        }
        printf("\n");
    }

}