#include<stdio.h>
int main()
{
    int n=1;
    for(int row=1;row<=5;row++)
    {
        for(int col=1;col<=5;col++)
        {
            if(n%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
            n++;
        }
        printf("\n");
    }
}