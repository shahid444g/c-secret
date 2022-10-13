#include<stdio.h>
int main(){
    int divident ,divisor;
    float remainder,quotient;
    printf("enter the divident");
    scanf("%d",&divident);
    printf("enter the divisor");
    scanf("%d",&divisor);
    quotient=divident/divisor;
    remainder=divident%divisor;
    printf("%f\n",quotient);
    printf("%f\n",remainder);
    return 0;

}