#include<stdio.h>

//global declaration
int sqr ( int x );

//main
int main (void)
{

    int a;
    int b;

    scanf("%d" , &a);

    b = sqr (a);

    printf("%d squared : %d\n" , a , b);
    return 0;
}

//user defined
int sqr (int x)
{
    return (x * x);

}