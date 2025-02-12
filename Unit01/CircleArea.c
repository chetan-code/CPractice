//1.1 - Calculate area of a circle - using inputs from user
#include <stdio.h>
/*Program to calculate area of a circle*/
int main(){
    float radius, area; //variable declaration
    printf("Enter radius : ");//output statement
    scanf("%f", &radius);//input statement - note that address of var is used as second arguement using &
    area = 3.14159 * radius * radius;//= assignment operator
    printf("Area of circle = %f", area);//output statement
}
