#include <stdio.h>
int main()
{ 
    int product = 1;
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++)
    {
       product = product *i;
       
    }
    printf(" the factorial is %d",product);
    return 0;
}