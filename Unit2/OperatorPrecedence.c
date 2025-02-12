//2.6 - a program to illustrate evaluation of expression - operator precedence 
#include <stdio.h>

int main(){
    float a ,b,c ,d,x,y,z;
    a = 20;
    b = 2;
    c = 23;
    //NOTE - rules to remember : PECMD-LARRA (Parentheses, Exponents, Complement, Multiplication, Division - Logical, Assignment, Relational, Right-Associative)
    x = a + b / (3 + c * 4 - 1);//Multiplication (*), Division (/), and Modulus (%) are evaluated before Addition (+) and Subtraction (-).
    y = a - b / (3 + c) * (4-1);
    z = a - (b / (3 + c) * 2 )-1 ;
    printf("x = %f\n", x);
    printf("y = %f\n", y);
    printf("z = %f\n", z);
    return 0;
}