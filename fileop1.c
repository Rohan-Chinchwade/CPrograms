#include<stdio.h>
int main()
{
    FILE* ptr;
    char data[100];
    ptr=fopen("demo.txt","w+");
    printf("File Created Sucessfully..");
    printf("\nEnter the details you wanna store:\n");
    fscanf(ptr,data);
    
    return 0;
}