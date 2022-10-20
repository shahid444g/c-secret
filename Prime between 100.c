#include <stdio.h>
void main() {
   for(int i = 2; i<=100;i++){

checkprime(i);
     }
  }
   int checkprime(int a)
{ int flag = 0;

for (int j= 2; j<a; j++){

if(a%j==0){

flag =1;
   }}
  if (flag==0){
    
printf("%d is prime\n",a);
    }
  }


  
