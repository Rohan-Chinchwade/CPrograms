#include<stdio.h>
int main()
{
    int i,j,cnt=0;
    cnt=1;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            //cnt=1;
            printf("%d",cnt);
            cnt++;
        }
        printf("\n");
    }
    return 0;
}