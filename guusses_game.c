#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void){
    const int Pick_Number = 9;
    int given_number;
    printf("Please a chooche Number");
scanf("%d",&given_number);

if (Pick_Number == given_number)
{
    printf("You are win");
}else{
    printf("You are loss");
}



    return 0;
}