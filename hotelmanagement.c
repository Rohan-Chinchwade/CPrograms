#include<stdio.h>
int main()
{
    int ch,qty,op;
    float amt,bill=0;
    do
    {
        printf("Welcome Please place your order.");
        printf("\n1.Tea=10$\n2.Coffee=20$\n3.ColdCoffee=30$..");
        scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("How many quantity: ");
        scanf("%d",&qty);
        bill+=(qty*10);
        printf("Order received..");
        break;

        case 2:
        printf("How many quantity: ");
        scanf("%d",&qty);
        bill=bill+(qty*20);
        printf("Order received..");
        break;
        case 3:
        printf("How many quantity: ");
        scanf("%d",&qty);
        bill+=(qty*30);
        printf("Order received..");
        break;
        default:printf("Sorry,We dont have this item..");

    }
    printf("Wanna order more if yes enter 1 or enter 0..");
    scanf("%d",&op);
    }while(op!=0);
    printf("Your total bill:%f",bill);
    printf("\nPlease pay your bill:)\n");
    scanf("%f",&amt);
    bill-=amt;
    if(bill==0)
    printf("Thank you for the payment..");
    else
    printf("Please pay remaining amount:(=%f",bill);
    
}