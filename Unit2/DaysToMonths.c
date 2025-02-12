//2.1 Program using integer arithematic to convert days into months and days - from user input
//consideration - every month has 30 days each
#include <stdio.h>

int main(){
    int months, days;
    printf("Enter days : \n");
    scanf("%d", &days);//remember to use & - address of var - else wierd results
    months = days / 30;
    days = days % 30; //remainder or modulus
    printf("Months = %d Days = %d", months, days);
}