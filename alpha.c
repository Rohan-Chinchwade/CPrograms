#include<stdio.h>
int main()
{
    //char a='A';
    for(int i=1;i<=3;i++)
    {
        char a='A';
        for(int j=1;j<=i;j++)
        {
            //char a='A';
            printf("%c",a);
        a++;
        }
        //a++;
        printf("\n");
    }
}