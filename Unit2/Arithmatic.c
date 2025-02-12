//2.5 Program to illustrate arithmatic operators
#include <stdio.h>

int main(){
    int a, b, c, d;
    a = 10;
    b = 15;
    c = ++a - b; //prefix form of ++ - increament the value and return the incremented value
    printf("a = %d b = %d c = %d \n", a, b, c);
    d = b++ + a;// the post fix form ++, increments i but return the prior, non incremented value
    printf("a = %d b = %d d = %d \n", a, b, d);
    printf("a/b = %d \n", a / b);
    printf("a%%b = %d \n", a % b);
    printf("a*b = %d \n", a * b);
    printf("a*b = %d \n", a * b);
    printf("%d \n", (c>d)?1:0);
    printf("%d \n", (c<d)?1:0);
}