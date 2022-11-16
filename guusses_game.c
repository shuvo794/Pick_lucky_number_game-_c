#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void){

    int Pick_Number ,given_number;
    time_t t;
    
    srand((unsigned)time(&t));

    Pick_Number = rand() %10 +1 ;

    printf("Please a chooche Number");

    scanf("%d",&given_number);

    if (Pick_Number == given_number)
       {
    printf("You are win");
           }else{
        printf("You are loss %d\n",Pick_Number);
             }



    return 0;
}