#include<stdio.h>
int main()
{
    int ch,amt,bal,op=0;
    bal=5000;
    do
    {
        printf("Welcome To Rohan Bank:)");
        printf("Select the operation\n1.Debit Amount\n2.Credit Amount\n3.Check Balance");
        scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Enter the amount..");
        scanf("%d",&amt);
        bal=bal-amt;
        printf("The Amount %d debited sucessfully.",amt);
        break;

        case 2:
        printf("Enter the amount..");
        scanf("%d",&amt);
        bal=bal+amt;
        printf("The Amount %d credited sucessfully.",amt);
        break;
        case 3:
        printf("Your account balance is:%d",bal);
        break;
        default:
        printf("Enter valid choice:)..");
    }
    printf("Wanna do another operation if yes enter 1 or else 0.\n");
    scanf("%d",&op);
    }while(op!=0);
    
}