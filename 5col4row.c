#include<stdio.h>
int main()
{
   char a;
    for(int row=1;row<=4;row++)
    {
        for(int col=5,a='E';col>=1;col--,a--)
        {
            printf("%c ",a);
        }
        printf("\n");
    }
}