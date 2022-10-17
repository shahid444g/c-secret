#include <stdio.h>

int main(void) {
  int n,copy,remainder,sum =0;
  printf("Enter the number\n");
  scanf("%d",&n);
  copy = n;
  while(n!=0){
    remainder = n%10;
    sum = sum*10 + remainder;
    n = n/10;
  }
  if(sum==copy){
    printf("number is palindrome");
    
  }
  else{
    printf("the number is not palindrome");
    
  }
  return 0;
}
