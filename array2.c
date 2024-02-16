#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    int length=sizeof(arr)/sizeof(int);
    //printf("Length:%d",length);
    printf("Printing the array before reversing:\n");
    for(int i=0;i<=length-1;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0,j=length-1;i<(length)/2;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("Printing the elements after reversing:\n");
    for(int i=0;i<=length-1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}