#include<stdio.h>
int main()
{
    int i,j,sp=0;
    for(i=1;i<=3;i++)
    {
        for(j=3;j>=i;j--)
        {
            printf("* ");
        }
        for(sp=i-1;sp>0;sp++)
        {
            printf(" ");
        }
        
        printf("\n");
    }
}