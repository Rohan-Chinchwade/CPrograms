#include<stdio.h>
int main()
{
    int cnt=1;
    for(int row=1;row<=4;row++)
    {
        for(int col=1;col<=5;col++,cnt++)
        {
            printf("%d ",cnt);
            
        }
        printf("\n");
    }
}