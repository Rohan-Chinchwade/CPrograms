#include<stdio.h>
int main()
{
     int a,b=0;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping:%d %d",a,b);
    // if(a==b)
    // printf("values are equal");
    // a++;
    // //else
    // printf("Values are not equal");

}