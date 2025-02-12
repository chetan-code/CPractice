//2.2 Convert Lowercase character to uppercase
#include <stdio.h>
#include <ctype.h>//library used for character function

int main(){
    char lower, upper;
    printf("Enter lowercase char : \n");
    lower = getchar();//get char from std input
    upper = toupper(lower);
    putchar(upper);//send char to std output
}