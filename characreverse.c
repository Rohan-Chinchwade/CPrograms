#include<stdio.h>
int main()
{
    char arr[]={'a','b','c','d','e','f'};
    int length=sizeof(arr)/sizeof(char);
    printf("Length:%d",length);
    printf("\nprinting the characters before swapping:\n");
    for(int i=0;i<length;i++)
    printf("%c ",arr[i]);
    for(int i=0,j=length-1;i<length/2;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("Printing the elements after swapping:\n");
    for(int i=0;i<length;i++)
    {
        printf("%c ",arr[i]);
    }
    return 0;
}