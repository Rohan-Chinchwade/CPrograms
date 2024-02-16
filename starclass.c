#include<stdio.h>
int main()
{
    int i,j,sp=0;
    for(i=3;i>=1;i--)
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
}