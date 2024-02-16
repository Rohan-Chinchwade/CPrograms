#include<stdio.h>
int add();
int main()
{
    //int ans=add(10,20);
    int a,b;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    printf("From user defined function addition is:%d",add(a,b));
    return 0;
}
int add(int a,int b)
{
    return a+b;
}