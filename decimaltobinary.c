#include <stdio.h>

 void main() {    

int n,remainder,quotient,temp;
  int arr[100];
  printf("enter number:");
  scanf("%d",&n);
      temp =0;
   while(n>1){

    remainder = n%2;
    arr[temp] = remainder;
   quotient =( n -remainder)/2;
   n=quotient;
   temp++;
     
  
}
  arr[temp] =1;
   printf("the binary code is ");
   for (int i =temp;i>=0;i--)
  {
printf("%d",arr[i]);
     }
   }
