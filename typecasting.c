/*
Implicit type casting
Explicit type casting


*/


// Implicit  higher to lower automatically

// #include <stdio.h>
// int main()
// {
//     short a = 10;
//     int b;
//     b =a;
//     printf("%d\n",a);
//     printf("%d\n",b);
//     return 0;
// }

//Explicit

#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
   printf("Enter the value of c ");
   c = getchar();
     printf(" the value of c is %d",(int)c);
    printf("Enter the value of a ");
    scanf("%d",&a);
     printf(" the value of a is %d",a);
    printf("Enter the value of b ");
    scanf("%f",&b);
     printf(" the value of b is %d ",(int)b);
   
    return 0;
}
