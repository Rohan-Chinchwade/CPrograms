#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    printf("Displaying elements:");
    for(int i=4;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}