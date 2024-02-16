#include<stdio.h>
#include<string.h>
int main()
{
    // int *ptr;
    // ptr=malloc(4*sizeof(int));
    // if(ptr==NULL)
    // printf("Memory Not allocated..");
    // printf("The Address is %x",ptr);
    char* ca;
    ca=calloc(15,sizeof(char));
    // if(ca==NULL)
    // printf("Memory not allocated");
    // //printf("The value after calloc is %s",*ca);
    // else
    // strcpy(ca,"Dynamic Alloc");
    // printf("The value is %s",ca);
    ca=realloc(ca,30*sizeof(char));
    if(ca==NULL)
    printf("Memory not allocated.");
    else
    strcpy(ca,"C is base for all programming");
    printf("The value is %s",ca);
    free(ca);
}