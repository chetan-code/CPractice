//2.3 Program to illustrate the use of math library functions
#include <stdio.h>
#include <math.h>//math function are available in math.h lib

int main(){
    int i = -10, e = 2, d = 10;
    float rad = 1.57;
    double d1 = 2.0, d2 = 3.0;
    //math functions
    printf("%d\n", abs(i));//[can be ignored for now]from gpt - If you're already including <math.h> but still getting the 
    //"implicit declaration of function 'abs'" warning, it's likely because abs is actually declared in stdlib.h, not math.h.
    printf("%f\n", sin(rad));
    printf("%f\n", cos(rad));
    printf("%f\n", exp(e));
    printf("%d\n", log(d));
    printf("%f\n", pow(d1, d2));
    return 0;
}