//pre-processor
#include<stdio.h>

void greeting (void); //Function declaration

//main function
int main ()
{

    greeting( );  //call
    return 0;
}

//user defined 
void greeting (void)
{

    printf("Hello World!");
    return;
}