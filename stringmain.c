#include <stdio.h>
#include<string.h>
int main(void) {
char stri1[12],stri2[12];
  int index,l1,l2;
  printf("Enter first string: ");
  scanf("%s",stri1);
  printf("Enter second string: ");
  scanf("%s",stri2);
  printf("enter the index");
  scanf("%d",&index);
  index--;
  l1 = strlen(stri1);
  l2 = strlen(stri2);
  if(index>l1){
    printf("Index out of bound");
    exit(0);
  }
  for(int i = l1; i>=index;i--){
    stri1[i+l2] = stri1[i];
  }
  for(int i = 0; i<l2;i++){
    stri1[index+i] = stri2[i];
  }
  puts(stri1);
  return 0;
}
