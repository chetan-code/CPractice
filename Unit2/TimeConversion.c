//2.7 - Program to convert seconds into minutes and seconds
#include <stdio.h>
#define SEC_PER_MIN 60 //pre preprocessor to define macros - will replace text at compile time 

int main(){
    int sec, min, left;
    printf("Enter seconds = \n");
    scanf("%d", &sec);
    min = sec/ SEC_PER_MIN;
    left = sec % SEC_PER_MIN;
    printf("%d seconds = %d minutes and %d seconds", sec, min, left);
}