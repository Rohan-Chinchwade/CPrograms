#include<stdio.h>
int main()
{
    int n=0;
    int arr[5];
    // printf("Enter the limit:");
    // scanf("%d",&n);
    for(int i=0;i<5;i++)
    {
        printf("Enter the %dth index: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
}