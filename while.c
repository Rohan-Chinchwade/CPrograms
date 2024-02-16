#include<stdio.h>
int main()
{
    int i,n=0;
    printf("Enter The limit: ");
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        printf("\n%d",(i*2));
        i++;
    }
    return 0;
}