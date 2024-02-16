#include<stdio.h>
int main()
{
    int ch=0;
    
    

        /* code */
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch)
    {
        case 1:
        printf("First Choice");
        break;
        case 2:
        printf("Second Choice");
        break;
        case 3:
        printf("Third Choice");
        break;
        default:
        printf("By Default");
        break;
    }

    
    
    


}