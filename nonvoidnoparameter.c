#include<stdio.h>

//global declaration
int getQuantity (void);

//main
int main (void)
{

    int amt;

    amt = getQuantity ( ); //call
    return 0;

}

//user defined
int getQuantity (void)
{

    int qty;
    printf("Enter Quantity :");
    scanf("%d" , &qty);
    return qty;

}