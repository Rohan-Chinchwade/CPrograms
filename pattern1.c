#include<stdio.h>
int main()
{
    int i,j=0;
    //int cnt=1;
    for(i=1;i<=3;i++)
    {
        int cnt=1;
        for(int sp=3-i;sp>0;sp--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            //int cnt=1;
            printf("%d",cnt);
            cnt++;
        }
        for(int k=j-2;k>0;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    
}