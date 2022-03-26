#include<stdio.h>

//global declararion 
void printOne ( int x ); //function declare

//main
int main (void)
{
    int a=5;

    printOne (a); //call
    return 0;

}

//user defined
void printOne ( int x )
{

    printf("%d\n" , x);
    return;

}