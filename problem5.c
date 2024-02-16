#include<stdio.h>
int main()
{
    // for(int i=50;i<=100;i++)
    // {
    //     if(i%2==0)
    //     printf("%d\n",i);
    // }
    //Multiplication Tables
    // 
    int sum=0;
    for(int i=100;i<=500;i++)
    {
        if(i%2==0)
        sum+=i;
        
    }
    printf("EvenSum is:%d",sum);
    return 0;
}